#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "";

char ssid[] = "";
char pass[] = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation

  Blynk.run();
}
