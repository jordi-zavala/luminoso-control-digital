#include <Arduino.h>

#define EXT_SENSOR 33
#define LUZ 18

void setup() {
  Serial.begin(115200);
  pinMode(EXT_SENSOR, INPUT);
  pinMode(LUZ, OUTPUT);

  analogSetAttenuation(ADC_11db);
}

void loop() {
  int EXT_RAW = analogRead(EXT_SENSOR);
  int EXT_LEVEL = 4095 - EXT_RAW;
  int EXT_PERCENT = map(EXT_LEVEL, 0, 4095, 0, 100);

  Serial.print("Lectura cruda: ");
  Serial.println(EXT_LEVEL);

  Serial.print("Porcentaje de luz: ");
  Serial.print(EXT_PERCENT);
  Serial.println("%");

  if (EXT_PERCENT < 30) {
    analogWrite(LUZ, 128);
  } else {
    analogWrite(LUZ, 0);
  }

  delay(300);
}
