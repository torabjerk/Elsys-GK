#include <pn532.h>
#include <pn532_uno.h>

uint8_t buff[255];
uint8_t uid[MIFARE_UID_MAX_LENGTH];
int32_t uid_len = 0;
uint8_t uid_key[MIFARE_UID_MAX_LENGTH];
PN532 pn532;

int match = 1; // match equals one or zero where 1 means that the IDs match and the lock is open.
int var=0; 

void setup() {
 

  // put your setup code here, to run once:
  PN532_SPI_Init(&pn532);
  //PN532_I2C_Init(&pn532);
  Serial.println("Hello!");
  if (PN532_GetFirmwareVersion(&pn532, buff) == PN532_STATUS_OK) {
    Serial.print("Found PN532 with firmware version: ");
    Serial.print(buff[1], DEC);
    Serial.print(".");
    Serial.println(buff[2], DEC);
    Serial.println("Waiting for RFID/NFC card...");
  }
  PN532_SamConfiguration(&pn532);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Check if a card is available to read
  uid_len = PN532_ReadPassiveTarget(&pn532, uid, PN532_MIFARE_ISO14443A, 1000);
  if (uid_len == PN532_STATUS_ERROR) {
    Serial.print(".");
  } else {
     while(var < 1){ //Sets the key ID to the first tag it registers
        for (uint8_t i = 0; i < uid_len; i++){
          uid_key[i]=uid[i];
          Serial.print(uid_key[i], HEX); //Prints the key
          Serial.print(" ");}
      Serial.println();
        var++;   
      }
      var=0;
    Serial.print("Found card with UID: ");
    for (uint8_t i = 0; i < uid_len; i++) {
      if (uid[i] <= 0xF) {
        Serial.print("0");
      }
      Serial.print(uid[i], HEX); //Prints the ID of the found card
      Serial.print(" ");
     
    }
    Serial.println();
   
      while(var < uid_len){
        if(uid_key[var]!=uid[var]){ //Checks if the ID of the tag matches the key. If not match equals 0 and the lock is locked.
          match=0;
        }
        var++;   
      }
      if(match==1){
      Serial.println("Lock open");
     }else{
      Serial.println("Wrong key, locked");
     }
     }
    delay(1000);
  }
