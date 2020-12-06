#include <Arduino.h>

int R_LED = 9;
int B_LED = 6;
int G_LED = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(R_LED, OUTPUT);
  pinMode(B_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(R_LED, LOW);
  digitalWrite(B_LED, HIGH);
  digitalWrite(G_LED, HIGH);
  delay(500);
  digitalWrite(R_LED, HIGH);
  digitalWrite(B_LED, LOW);
  digitalWrite(G_LED, HIGH);
  delay(500);
  digitalWrite(R_LED, HIGH);
  digitalWrite(B_LED, HIGH);
  digitalWrite(G_LED, LOW);
  delay(500);
}