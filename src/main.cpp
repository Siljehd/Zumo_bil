#include <Arduino.h>
#include <Zumo32U4Motors.h>
#include "test.h"

void setup(){
  LED_init();
}

void loop(){
  blinkLED();
}

/*
// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
  */