//VTM https://www.youtube.com/c/VTMVlogVoThongMinh
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
int pir = 8;
int light = 9;
void setup()
{
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(3, 0);
  lcd.print("PIR sensor");
}

void loop()
{
  if (digitalRead(8) == HIGH)
  {
    lcd.setCursor(0, 1);
    lcd.print("Bat den");
    digitalWrite(light, HIGH);
  }
  else
  {
    digitalWrite(light, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Tat den");
  }
}
