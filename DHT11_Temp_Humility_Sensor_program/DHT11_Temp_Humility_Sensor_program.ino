#include "DHT.h"
#define DPIN 4
#define DTYPE DHT11

DHT dht(DPIN,DTYPE);

void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
   dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);

  float tc = dht.readTemperature(false);
  float tf = dht.readTemperature(true);
  float hu = dht.readHumidity();

  Serial.print("Temp: ");
  Serial.print(tc);
  Serial.print(" C, ");
  Serial.print(tf);
  Serial.print(" F, Hum: ");
  Serial.print(hu);
  Serial.print('\n');
 // Serial.print("%");


}
