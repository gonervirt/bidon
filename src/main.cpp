#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);


void loop();
void setup1();

void function2() {
  // put your function code here, to run repeatedly:
  // int result = myFunction(2, 3);
  //if (result == 5) {
    // Serial.println("Test passed!");
  //} else {
    // Serial.println("Test failed!");
  // }
}

  void function3() ;

  void function4();

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