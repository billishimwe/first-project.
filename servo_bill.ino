#include <Servo.h>
#include<LiquidCrystal.h>
const int Rs=2,e=3,D4=4,D5=5,D6=6,D7=7;
LiquidCrystal lcd(Rs,e,D4,D5,D6,D7);
Servo myservo;
int trigg=8;
int encho=10;
void setup() {
  lcd.begin(16,2);
  myservo.attach(9);
  pinMode(8,OUTPUT);
  pinMode(10,INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(8,LOW);
  delay(10);
  digitalWrite(8,HIGH);
  delay(10);
  digitalWrite(8,LOW);
  long pulse=pulseIn(10,HIGH);
  int distance=pulse*0.0343/2;
  Serial.println(distance);
  if (distance<10)
  {
  lcd.setCursor(0,0);
  myservo.write(180);
  lcd.print("Door is open");
  delay(1000);
  }
  else
  {
  lcd.setCursor(0,0);
  myservo.write(0);
  lcd.print("Door is closed");
  delay(1000);
  }
}
