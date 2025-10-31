#include "test.h"

void LED_init(void){
    pinMode(LED_PIN, OUTPUT);
}

void blinkLED(void){
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}