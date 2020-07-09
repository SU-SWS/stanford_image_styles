<?php

/**
 * Class StylesCest.
 *
 * @group stanford_image_styles
 */
class StylesCest {

  /**
   * Log in as an admin first.
   */
  public function _before(AcceptanceTester $I) {
    $I->logInWithRole('administrator');
  }

  /**
   * Image styles should have been created.
   */
  public function testImageStyles(AcceptanceTester $I) {
    $I->amOnPage('/admin/config/media/image-styles');

    $I->canSee('Circle');
    $I->canSee('Breakpoint - LG - 1x');
    $I->canSee('Breakpoint - LG - 2x');
    $I->canSee('Breakpoint - MD - 1x');
    $I->canSee('Breakpoint - MD - 2x');
    $I->canSee('Breakpoint - SM - 1x');
    $I->canSee('Breakpoint - SM - 2x');
    $I->canSee('Breakpoint - XL - 1x');
    $I->canSee('Breakpoint - XL - 2x');
    $I->canSee('Breakpoint - 2XL - 1x');
    $I->canSee('Breakpoint - 2XL - 2x');
    $I->canSee('Card - 1X - 478x318');
    $I->canSee('Card - 2X - 956x636');
    $I->canSee('CTA - 1X - 507x338');
    $I->canSee('CTA - 1X - 596x397');
    $I->canSee('CTA - 2X - 1014x676');
    $I->canSee('CTA - 2X - 1192x794');
  }

  /**
   * Responsive Image styles should have been created.
   */
  public function testResponsiveStyles(AcceptanceTester $I) {
    $I->amOnPage('/admin/config/media/responsive-image-style');
    $I->canSee('Card - 478x318');
    $I->canSee('CTA - 596x397');
    $I->canSee('Stanford Hero Block - Wide');
  }

}
