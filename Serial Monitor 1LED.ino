int led1=2;
void setup() {
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}
void loop() {
   
    digitalWrite(2,HIGH);
    delay(200); 
    digitalWrite(2,LOW);
    delay(200); 
}
