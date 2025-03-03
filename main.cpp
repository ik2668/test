#include <Arduino.h>

void setup() {
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  int value = analogRead(2);
  float buff = value * 100 / 4095 ;
  if(buff>=50){
    digitalWrite(4,LOW);
  }
  else{
    digitalWrite(4,HIGH);
  }
  Serial.println("Brightness:"+String(buff)+"%");
}