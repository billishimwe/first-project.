int LED1=2;
int LED2=3;
int count=0;
int button=5;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,INPUT);
  Serial.begin(9600);

}

void loop() {
  int ButtonData=digitalRead(5);
  if(ButtonData==1)
{
   count++;
    Serial.print("count=");
   Serial.println(count);
  
  if(count==1)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
  }
  else if(count==2)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
  } 
  else
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    count=0;
  }

  } 
  
  delay(100);
  }
  

