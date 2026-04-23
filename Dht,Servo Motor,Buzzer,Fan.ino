#include "DHT.h"
#define DHTPIN 2 
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE);
#include<Servo.h>
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27,16,2);
int trigg=3;
int echo=4;
int buzz=5;
int fan=6;
Servo mydoor;
void setup() {
  dht.begin();
  pinMode(5,OUTPUT);
  lcd.init();
  lcd.backlight();
  mydoor.attach(9);
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  float t = dht.readTemperature();
  Serial.println("temperature: ");
  Serial.println(t);
  Serial.println("0c");
  float h = dht.readHumidity();
  Serial.println("humidity: ");
  Serial.println(h);
  Serial.println("0F");
  if(t>=30)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
    digitalWrite(6,LOW);
  }
  digitalWrite(3,LOW);
  delay(2);
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(3,LOW);
  long pulse=pulseIn(4,HIGH);
  int distance=pulse*0.0343/2;
  lcd.setCursor(0,0);
  lcd.print("distance is ");
  lcd.print(distance);
  lcd.print("cm");
  if(distance<=20)
  {
    mydoor.write(180);
    lcd.setCursor(0,1);
    lcd.print("door is open");
    digitalWrite(5,HIGH);
    delay(10);
    digitalWrite(5,LOW);
    delay(10);  
  }
  else
  {
    mydoor.write(0);
    lcd.setCursor(0,1);
    lcd.print("doorisclosed");
    digitalWrite(5,LOW);
  }
  delay(500);
}
