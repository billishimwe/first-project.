int led1=2;
int led2=3;
int led3=4;
void setup() {
     pinMode(2,OUTPUT);
     pinMode(3,OUTPUT);
     pinMode(4,OUTPUT);
}
void loop() {
      {
        digitalWrite(2,HIGH);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        delay(300);  
      }   
      {
        digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
        delay(300); 
      }
      {
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,HIGH);
        delay(300); 
      }
      {
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        delay(600);
      }
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      delay(600);    
}
