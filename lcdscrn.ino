

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  // initialize the LCD
  lcd.init();

  // Turn on the blacklight
  lcd.setBacklight((uint8_t)1);
}

void loop()
{
    lcd.print("Fish Deaths:");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);
lcd.print("7");
delay (1000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("14");
  delay (1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("21");
  delay (1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("28");
  delay (1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("35");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("42");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("49");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("56");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("63");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
   lcd.print("70");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("77");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("84");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("91");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("98");
  delay(1000);
    lcd.clear();
  lcd.setCursor(0,0);}




  