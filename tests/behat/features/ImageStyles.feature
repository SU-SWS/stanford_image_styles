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
