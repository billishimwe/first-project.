int led1=2;
int ldr=A0;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}
void loop() {

   int ldrvalue=analogRead(A0);
   Serial.println(ldrvalue);
   if(ldrvalue=1000)
   {
    digitalWrite(2,HIGH);
   }
   else
   {
    digitalWrite(2,LOW);
   }
}
