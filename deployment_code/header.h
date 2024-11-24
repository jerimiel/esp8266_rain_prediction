#include <ESP8266WiFi.h>
#include <math.h>
#include "DHT.h"

#define DHTPIN 4     // Pin where the DHT22 is connected
#define DHTTYPE DHT22   // DHT 22 (AM2302)

#define NFEAT 2 //Number of features