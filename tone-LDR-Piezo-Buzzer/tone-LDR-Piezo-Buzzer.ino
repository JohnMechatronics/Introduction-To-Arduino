/*
  Plays a pitch that changes based on the reading of an LRD
  circuit:
  - LRD co analogue pin 0 and 5v with a 10 k resister from analoge a0 to ground
  - piezo buzzer on digital pin 9

  -*Note must have pitches.h in the sketch folder.

   john.wild@rca.ac.uk
*/

#include "pitches.h"
const int photocellPin = 0;     // the cell and 10K pulldown are connected to a0
const int buzzerPin = 9;     // the number of the piezo buzzer pin

int photocellVal;     // the analog reading from the sensor divider

void setup() {
  pinMode(buzzerPin, OUTPUT);

}

void loop() {
  int sensorReading = analogRead(photocellPin);
  note(sensorReading);
  tone(8, note, 20);
  analogWrite(buzzerPin, note);
}




int note(int sensorReading) {
  if ((sensorReading >= 0) && (sensorReading <= 31)) {
    return NOTE_C2;
  } else if ((sensorReading >= 32) && (sensorReading <= 63)) {
    return NOTE_D2;
  } else if ((sensorReading >= 64) && (sensorReading <= 95)) {
    return NOTE_E2;
  } else if ((sensorReading >= 96) && (sensorReading <= 127)) {
    return NOTE_F2;
  } else if ((sensorReading >= 128) && (sensorReading <= 159)) {
    return NOTE_G2;
  } else if ((sensorReading >= 160) && (sensorReading <= 191)) {
    return NOTE_A2;
  } else if ((sensorReading >= 192) && (sensorReading <= 223)) {
    return NOTE_B2;
  } else if ((sensorReading >= 224) && (sensorReading <= 255)) {
    return NOTE_C3;
  }
}












