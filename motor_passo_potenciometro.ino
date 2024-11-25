// Controle de Motor de Passo com Potenciometro
// Blog Eletrogate - https://blog.eletrogate.com/guia-completo-do-motor-de-passo-28byj-48-driver-uln2003
// Baseado em http://www.airspayce.com/mikem/arduino/AccelStepper/ProportionalControl_8pde-example.html
// Motor 28BYJ48/5V com Modulo ULN20023 - Arduino UNO / IDE 1.8.5
// Uma volta no eixo = 4075 pulsos
// Gustavo Murta 02/jago/2018

#include <AccelStepper.h>  // biblioteca AccelStepper

#define ANALOG_PIN A0  // pino A0 para leitura da tensão do Potenciometro

AccelStepper motorPasso(AccelStepper::FULL4WIRE, 8, 10, 9, 11);  // Passo completo 4 fios

void setup() {
  motorPasso.setMaxSpeed(600);  // maxima velocidade = 500 pulsos por segundo
}

void loop() {
  // lendo a tensão do pino A0 do Arduino
  int analog_in = analogRead(ANALOG_PIN);
  motorPasso.setSpeed(analog_in);

  motorPasso.runSpeed();
  
  
}