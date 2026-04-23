#include<SPI.h>
#include<MFRC522.h>
const int sda=10;
const int rst=9;
MFRC522 rfid(10,9);
void setup() {
  Serial.begin(115200);
  SPI.begin();
  rfid.PCD_Init();
  Serial.println("Tap your card");
}
void loop() {
    if(!rfid.PICC_IsNewCardPresent()||
    !rfid.PICC_ReadCardSerial())return;
    String myRecord="";
  for(byte i=0; i< rfid.uid.size;i++)
 {
  myRecord += String(rfid.uid.uidByte[i], HEX);
 }
 myRecord.toUpperCase();
 Serial.print("your ID is: ");
 Serial.println(myRecord);
 rfid.PICC_HaltA();
 delay(1000);
}
