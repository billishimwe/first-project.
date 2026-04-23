
#include<Servo.h>
#include<LiquidCrystal.h>
const int Rs=4,e=5,D4=6,D5=7,D6=8,D7=9;
LiquidCrystal lcd(Rs,e,D4,D5,D6,D7);
int trigg=2;
int ench=3;
Servo myservo;
void setup() {
  lcd.begin(16,2);
  pinMode(2,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}
void loop() {
 digitalWrite(2,LOW);
 delay(100);
 digitalWrite(2,HIGH);
 delay(100);
 digitalWrite(2,LOW);

 long pulse=pulseIn(3,HIGH);
 int distance=pulse*0.0343/2;
 Serial.println(distance);
 if(distance<50)
 { 
  myservo.write(180);
  lcd.print("Door is open");
  delay(100);
 }
 else
 {
  myservo.write(180);
  lcd.print("Door is closed");
  delay(100);
 }
  
}
