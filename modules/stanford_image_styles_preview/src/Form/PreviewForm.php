<?php

namespace Drupal\stanford_image_styles_preview\Form;

use Drupal\Core\Form\FormBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\file\Entity\File;
use Drupal\image\Entity\ImageStyle;

/**
 * Class PreviewForm.
 */
class PreviewForm extends FormBase {

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'stanford_image_styles_preview_form';
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $form['image'] = [
      '#type' => 'managed_file',
      '#title' => $this->t('Image'),
      '#description' => $this->t('Upload an image to see how the image styles react'),
      '#required' => TRUE,
      '#upload_validators' => [
        'file_validate_extensions' => ['gif png jpg jpeg'],
      ],
    ];

    $form['submit'] = [
      '#type' => 'submit',
      '#value' => $this->t('Submit'),
    ];
    $this->buildPreview($form, $form_state);

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    // Just rebuild the form with the new previews.
    $form_state->setRebuild();
  }

  /**
   * Builds the preview portions of the form using a default image or an
   * uploaded image.
   *
   * @param array $form
   *   Simple form api array.
   * @param FormStateInterface $form_state
   *   Form State from building the form.
   */
  private function buildPreview(array &$form, FormStateInterface &$form_state) {
    $style_ids = \Drupal::entityQuery('image_style')->execute();
    $styles = ImageStyle::loadMultiple($style_ids);

    $file_uri = drupal_get_path('module', 'stanford_image_styles_preview') . '/img/preview_image.jpg';
    $file = NULL;
    // If the form is being rebuild, we can grab the image and load it.
    if ($image = $form_state->getValue('image')) {
      $file = File::load(reset($image));
      if ($file) {
        $file_uri = $file->getFileUri();
      }
    }

    $form['styles']['original'] = [
      '#type' => 'fieldset',
      '#title' => $this->t('Original'),
    ];
    $form['styles']['original']['preview'] = [
      '#markup' => '<img src="' . file_create_url($file_uri) . '" />',
    ];

    /** @var \Drupal\image\Entity\ImageStyle $style */
    foreach ($styles as $style) {
      $form['preview'][$style->getOriginalId()] = $this->buildStylePreview($style, $file_uri);
    }

  }

  /**
   * Builds the information about the style including all effects.
   *
   * @param ImageStyle $style
   *   Image style to build preview.
   * @param string $file_uri
   *   Original file uri.
   *
   * @return array
   *   Form api array of the summary of effects on the style and the preview.
   */
  private function buildStylePreview($style, $file_uri) {
    $form = [
      '#type' => 'fieldset',
      '#title' => $style->label(),
    ];

    if ($style->getEffects()->getInstanceIds()) {
      $form['effects'] = [
        '#type' => 'fieldset',
        '#title' => $this->t('Effects'),
      ];

      $form['effects']['summary'] = $this->buildEffectSummary($style);;
    }

    $form['edit'] = [
      '#prefix' => '<div class="clearfix">',
      '#suffix' => '</div>',
      '#markup' => $this->l($this->t('Edit Style'), $style->urlInfo()),
    ];

    $form['image'] = [
      '#theme' => 'image',
      '#uri' => $this->getStyleDerivative($style, $file_uri),
    ];

    return $form;
  }

  /**
   * Create the image derivative and get the derivative url.
   *
   * @param ImageStyle $style
   *   The Image style to create a derivative and return that uri.
   * @param string $file_uri
   *   The original URI of the file.
   *
   * @return string
   *   THe style derivative URI.
   */
  private function getStyleDerivative($style, $file_uri) {
    $derivative = explode('/', $style->buildUri($file_uri));
    $file_name = array_pop($derivative);
    $extension = substr($file_name, strrpos($file_name, '.') + 1);
    // Change the file name.
    $derivative[] = 'stanford_image_styles_preview.' . $extension;
    // Temporary image styles break so we create it in public.
    $derivative = str_replace('temporary://', 'public://', implode('/', $derivative));
    $style->createDerivative($file_uri, $derivative);
    return $derivative;
  }

  /**
   * Build a list of all effects on a image style.
   *
   * @param ImageStyle $style
   *   Image style to build list of effects.
   *
   * @return array
   *   Render array of a list of effect summaries.
   */
  private function buildEffectSummary($style) {
    $effects = $style->getEffects();
    $list = [];
    foreach ($effects->getInstanceIds() as $effect_id) {
      $effect = $effects->get($effect_id);

      $effect_info = $effect->label();
      $summary = $effect->getSummary();
      if (!empty($summary)) {
        $effect_info .= ': ' . trim(strip_tags(render($summary)));
      }
      $list[] = $effect_info;
    }
    if ($list) {
      return [
        '#theme' => 'item_list',
        '#items' => $list,
      ];
    }
    return [];
  }

}
