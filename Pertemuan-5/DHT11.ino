#include <Wire.h>
// #include <LiquidCrystal_I2C.h>
// #include "DHT11.h"
#include "DHT.h"


#define DHTPIN 5
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("ESP32 LED Control with LCD");

  dht.begin();
}

void loop() {
  // status LED
  float humidity = dht.readHumidity();  
  float temperature = dht.readTemperature();  

  Serial.print("Temperature:");
  Serial.println(temperature);
  Serial.print("Humidity:");
  Serial.println(humidity);
  delay(2000);
}