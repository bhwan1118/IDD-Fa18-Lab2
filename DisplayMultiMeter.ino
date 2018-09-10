// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

  // set up the LCD's number of columns androws:
  lcd.begin(10, 1);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);

  // prevents duplicated display  
  lcd.setCursor(0, 0);
  
  // Print a message to the LCD.
  lcd.print(voltage); 
  
}
