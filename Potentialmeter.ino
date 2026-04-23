int led1=2;
int pot=A1;
void setup() {
     pinMode(2,OUTPUT);
     pinMode(A1,INPUT);
     Serial.begin(9600);
}
void loop() {
     int potvalues=analogRead(A1);
     Serial.println(potvalues);
     {
      digitalWrite(2,potvalues);
     }

}
