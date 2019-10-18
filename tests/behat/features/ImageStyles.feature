@api
Feature: Stanford Image styles
  In order to verify that image styles are added
  As an admin
  I should be able to see the correct image styles

  Scenario: Check for the image styles
    Given I am logged in as a user with the "administrator" role
    And I am on "admin/config/media/image-styles"
    Then I should see "Circle"
    And I should see "Breakpoint - LG - 1x"
    And I should see "Breakpoint - LG - 2x"
    And I should see "Breakpoint - MD - 1x"
    And I should see "Breakpoint - MD - 2x"
    And I should see "Breakpoint - SM - 1x"
    And I should see "Breakpoint - SM - 2x"
    And I should see "Breakpoint - XL - 1x"
    And I should see "Breakpoint - XL - 2x"
    And I should see "Breakpoint - 2XL - 1x"
    And I should see "Breakpoint - 2XL - 2x"
    And I should see "Card - 1X - 478x318"
    And I should see "Card - 2X - 956x636"
    And I should see "CTA - 1X - 507x338"
    And I should see "CTA - 1X - 596x397"
    And I should see "CTA - 2X - 1014x676"
    And I should see "CTA - 2X - 1192x794"
