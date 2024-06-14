/*
    Project name : LCD 16x2 Display
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-lcd-16x2-display
*/

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // Set up the LCD's number of columns and rows
  lcd.begin(16, 2);

  // Print a message to the LCD
  lcd.print("Hello, Arduino!");
}

void loop() {
  // Set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting starts at 0)
  lcd.setCursor(0, 1);

  // Print the number of seconds since reset
  lcd.print(millis() / 1000);

  delay(1000); // Delay for 1 second
}
