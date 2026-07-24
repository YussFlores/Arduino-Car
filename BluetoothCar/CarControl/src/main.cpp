#include <Arduino.h>
#include "motors.h"
#include <SoftwareSerial.h>
SoftwareSerial BT(2, 3);
int state = 0;
void setup(){
  Serial.begin(9600);
  BT.begin(9600);
  setupMotors();

}

void loop(){
  if(BT.available()){
    state = BT.read();
  }
if (state == 0){
  stop();
}

else  if (state == 1) {
    forward(255);
}
else if (state == 2) {
    back(255);
}
else if (state == 3) {
    right(255);
}
else if (state == 4) {
    left(255);
}
}