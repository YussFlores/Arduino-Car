#include <Arduino.h>
#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); // RX, TX

const uint8_t pX = A7;
const uint8_t pY = A4;

int lastX = 530;
int lastY = 524;
int lastState = 0;

void setup(){
  Serial.begin(9600);
  BT.begin(9600); 
  pinMode(pX, INPUT);
  pinMode(pY, INPUT);

}

void loop(){

  int valX = analogRead(pX);
  int valY = analogRead(pY);
  int state = 0;
  if(valY > 600){
    state = 3;
  }
  else if(valY < 500){
    state = 4;
  }
  else if(valX > 600){
    state = 1;
  }
  else if(valX < 500){
    state = 2;
  }

  BT.write(state);
  Serial.println(state);
  // if(abs(valX - lastX) <= 5) send lastX ; else send valX
  if(lastState == state){
  return;
}
else{
  BT.write(state);
  lastState = state;
}
  
}

// Y izquierda = 0, derecha = 1023
//Z delante = 1023, atras = 0
