@api
Feature: Stanford Responsive Image styles
  In order to verify that the responsive image styles are added
  As an admin
  I should be able to see the correct responsive image styles

  Scenario: Check for the responsive image styles
    Given I am logged in as a user with the "administrator" role
    And I am on "admin/config/media/responsive-image-style"
    Then I should see "Card - 478x318"
    Then I should see "CTA - 596x397"
    Then I should see "Stanford Hero Block - Wide"
