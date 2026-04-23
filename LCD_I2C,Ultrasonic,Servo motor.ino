#include<Servo.h>
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27,16,2);
int trigg=3;
int echo=4;
Servo Mydoor;
void setup() {
  lcd.init();
  lcd.backlight();
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(3,LOW);
  delay(2);
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
  long pulse=pulseIn(4,HIGH);
  int distance=pulse*0.0343/2;
  Serial.println(distance); 
}
