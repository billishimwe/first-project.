int led1=2;
int ldr=A1;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
}
void loop() {
  int data=analogRead(A1);
  Serial.println(data);
  if(data<500)
   {
    digitalWrite(2,HIGH);
   }
   else
   {
    digitalWrite(2,LOW);
   }
}
