
#include <Arduino.h>

const uint8_t ENA  = 5;
const uint8_t IN1A = 6;
const uint8_t IN2A = 7;


const uint8_t ENB  = 11;
const uint8_t IN1B = 10;
const uint8_t IN2B = 9;


void setupMotors() 
{ 
  pinMode(ENA, OUTPUT);
  pinMode(IN1A, OUTPUT);
  pinMode(IN2A, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN1B, OUTPUT);
  pinMode(IN2B, OUTPUT);

  
}
void back(int power)
{
  digitalWrite(IN1A, LOW);
  digitalWrite(IN2A, HIGH);
  analogWrite(ENA, power);

  digitalWrite(IN1B, LOW);
  digitalWrite(IN2B, HIGH);
  analogWrite(ENB, power);
}


// Retroceder
void forward(int power)
{
  digitalWrite(IN1A, HIGH);
  digitalWrite(IN2A, LOW);
  analogWrite(ENA, power);

  digitalWrite(IN1B, HIGH);
  digitalWrite(IN2B, LOW);
  analogWrite(ENB, power);
}


// Girar izquierda
void left(int power)
{
  // Motor A parado
  digitalWrite(IN1A, LOW);
  digitalWrite(IN2A, HIGH);
  analogWrite(ENA, power);

  // Motor B adelante
  digitalWrite(IN1B, HIGH);
  digitalWrite(IN2B, LOW);
  analogWrite(ENB, power);
}


// Girar derecha
void right(int power)
{
  // Motor A adelante
  digitalWrite(IN1A, HIGH);
  digitalWrite(IN2A, LOW);
  analogWrite(ENA, power);

  // Motor B parado
  digitalWrite(IN1B, LOW);
  digitalWrite(IN2B, HIGH);
  analogWrite(ENB, power);
}


// Detener
void stop()
{
  digitalWrite(IN1A, LOW);
  digitalWrite(IN2A, LOW);
  analogWrite(ENA, 0);

  digitalWrite(IN1B, LOW);
  digitalWrite(IN2B, LOW);
  analogWrite(ENB, 0);
}