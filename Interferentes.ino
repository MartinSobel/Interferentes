#include "MIDIUSB.h"

const int analogInPin = A0;
int sensorValue = 0;

void noteOn(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOn = {0x09, 0x90 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOn);
}

void noteOff(byte channel, byte pitch, byte velocity) {
  midiEventPacket_t noteOff = {0x08, 0x80 | channel, pitch, velocity};
  MidiUSB.sendMIDI(noteOff);
}

void setup() {
  Serial.begin(115200);
}

void loop() {
  sensorValue = analogRead(analogInPin);
  Serial.println(sensorValue);
  delay(100);

  if (sensorValue > 150 && sensorValue < 200){
      Serial.println("Sending note on");
      noteOn(0, 48, 64);   // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(500);
      Serial.println("Sending note off");
      noteOff(0, 48, 64);  // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(100);
  }

  if (sensorValue > 200 && sensorValue < 220){
      Serial.println("Sending note on");
      noteOn(0, 49, 64);   // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(500);
      Serial.println("Sending note off");
      noteOff(0, 49, 64);  // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(100);
  }

  if (sensorValue > 220 && sensorValue < 250){
      Serial.println("Sending note on");
      noteOn(0, 50, 64);   // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(500);
      Serial.println("Sending note off");
      noteOff(0, 50, 64);  // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(100);
  }

  if (sensorValue > 250 && sensorValue < 300){
      Serial.println("Sending note on");
      noteOn(0, 51, 64);   // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(500);
      Serial.println("Sending note off");
      noteOff(0, 51, 64);  // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(100);
  }

  if (sensorValue > 300 && sensorValue < 350){
      Serial.println("Sending note on");
      noteOn(0, 52, 64);   // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(500);
      Serial.println("Sending note off");
      noteOff(0, 52, 64);  // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(100);
  }

  if (sensorValue > 350 && sensorValue < 400){
      Serial.println("Sending note on");
      noteOn(0, 53, 64);   // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(500);
      Serial.println("Sending note off");
      noteOff(0, 53, 64);  // Channel 0, middle C, normal velocity
      MidiUSB.flush();
      delay(100);
  }
}
