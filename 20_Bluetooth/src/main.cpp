#include <Arduino.h>

int pin = 7;
void setup() {
    Serial.begin(9600);
    pinMode(pin, OUTPUT);
}

void loop() {
    // put your main code here, to run repeatedly:
    if(Serial.available()>0) {

        // reading the data received from the bluetooth module
        String data = Serial.readString(); 
        
        if(data.equalsIgnoreCase("ac")) {
            digitalWrite(pin, HIGH);
        }
        if(data.equalsIgnoreCase("kapat")) {
            digitalWrite(pin, LOW);
        }
        
        Serial.println(data);
   }
   delay(50);
}