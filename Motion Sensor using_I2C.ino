#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
int ir= A0;
void setup()
{
  lcd.init();                      
  lcd.backlight();
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int motData=analogRead(A0);
  lcd.setCursor(0,0);
  lcd.print(motData);
  Serial.println(motData);
  delay(50);
 
}
