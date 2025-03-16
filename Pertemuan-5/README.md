# Pertemuan 5 - Mata Kuliah IoT

Membuat skema dan rangkaian dasar ESP32 dengan sensor DHT11

## Skema menggunakan WOKWI:

[wokwi.com](https://wokwi.com)

Membuat skema ESP32 dengan sensor DHT11 sebelum implementasi nyata menggunakan alat sungguhan, tujuan pembuatan skema untuk memastikan apakah rangkaian yang telah dibuat dapat berjalan sesuai dengan ekspektasi. Pembuatan skema juga bertujuan menghindarkan dari kerusakan dan kongslet alat karena _wiring_ atau pengkabelan yang salah.

Dibawah merupakan rangkaian menggunakan **wokwi.com** dan code **C** sebelum implementasi dengan alat sungguhan:
![Alt Text](Images/Week%20-%202.png)

## Hasil:

Setelah hasil dari **wokwi.com** berjalan dengan baik, selanjutnya adalah implementasi rangkaian dan code pada alat:

### Gambar

![Alt Text](Images/Week%20-%202_electrical.png.jpg)

### Code:

```c
#include <Wire.h>
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
```
