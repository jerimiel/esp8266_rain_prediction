#include "header.h"

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // Read temperature and humidity
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print values to serial monitor
  /*
  Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
  */

  int result = prediction(t,h);
  if (result == 1)
  {
    //Do what you need
    Serial.println("Rain");
  }
  if (result == 0)
  {
    //Do what you need
    Serial.println("No Rain");
  }

 
  
}
