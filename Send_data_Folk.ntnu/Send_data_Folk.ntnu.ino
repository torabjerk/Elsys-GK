#include <SPI.h>
#include <WiFiNINA.h>

#include "arduino_secrets.h"
///////please enter your sensitive data in the Secret tab/arduino_secrets.h
char ssid[] = SECRET_SSID;        // your network SSID (name)
char pass[] = SECRET_PASS;    // your network password (use for WPA, or use as key for WEP)
int status = WL_IDLE_STATUS;     // the WiFi radio's status

#define SensorPin A0; //Defining what pin the temp sensor is connected to

char server[] = "folk.ntnu.no"; //Connects to the folk.ntnu server

String postData;
String postVariable = "temp="; 

WiFiClient client;

void setup() {

  Serial.begin(9600);

  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to Network named: ");
    Serial.println(ssid);
    status = WiFi.begin(ssid, pass);
    delay(10000);
  }

  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());
  IPAddress ip = WiFi.localIP();
  IPAddress gateway = WiFi.gatewayIP();
  Serial.print("IP Address: ");
  Serial.println(ip);
}

void loop() {
  int reading = analogRead(SensorPin); //Reads the value of the sensor
  float voltage = reading * 5.0;
  voltage /= 1024.0;
  float temperatureC = (voltage - 0.5) * 100 ; // Derives the temperatur in celcius
  

  postData = postVariable + temperatureC; 

  if (client.connect(server, 80)) {
    client.println("POST /torakb/test/post.php HTTP/1.1"); //Remeber to change this to match your folk.ntnu server.
    client.println("Host: folk.ntnu.no");
    client.println("Content-Type: application/x-www-form-urlencoded");
    client.print("Content-Length: ");
    client.println(postData.length());
    client.println();
    client.print(postData);
  }

  if (client.connected()) {
    client.stop();
  }
  Serial.println(postData);

  delay(1000);
}
