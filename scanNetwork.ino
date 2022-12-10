#include <WiFi.h> 

void setup(){
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
}

void loop(){
  Serial.println("Scan Wifi...");
  int networks = WiFi.scanNetworks();

  if(networks == 0){
    Serial.println("No WiFi Networks!");
  }else{
    Serial.print(networks);
    Serial.println(" Networks Found!");

    for(int i = 0; i < networks; i++){
      Serial.print("WiFi ke-");
      Serial.println(i+1);
      Serial.println(WiFi.SSID(i));
      Serial.println(WiFi.RSSI(i));
      delay(10);
    }
  }
}
