#include <Arduino.h>
#include <AccelStepper.h>

#define MOTOR1_STEP_PIN D2
#define MOTOR1_DIR_PIN D3
#define MOTOR2_STEP_PIN D0
#define MOTOR2_DIR_PIN D1

#define STEPS_PER_REVOLUTION 200

AccelStepper motor1(AccelStepper::DRIVER, MOTOR1_STEP_PIN, MOTOR1_DIR_PIN);
AccelStepper motor2(AccelStepper::DRIVER, MOTOR2_STEP_PIN, MOTOR2_DIR_PIN);

void setup() {
  motor1.setMaxSpeed(1000);         // Define a velocidade máxima do motor 1 em passos por segundo
  motor2.setMaxSpeed(1000);         // Define a velocidade máxima do motor 2 em passos por segundo

  motor1.setAcceleration(5000);     // Define a aceleração do motor 1 em passos por segundo por segundo
  motor2.setAcceleration(5000);     // Define a aceleração do motor 2 em passos por segundo por segundo

  Serial.begin(9600);               // Inicializa a comunicação serial
}

void loop() {
  motor1.moveTo(2000);              // Move o motor 1 para a posição 2000 passos
  motor2.moveTo(2000);              // Move o motor 2 para a posição 2000 passos

  while (motor1.isRunning() || motor2.isRunning()) {
    motor1.run();                   // Executa o motor 1
    motor2.run();                   // Executa o motor 2
  }

  motor1.moveTo(0);                 // Move o motor 1 de volta para a posição inicial (0 passos)
  motor2.moveTo(0);                 // Move o motor 2 de volta para a posição inicial (0 passos)

  while (motor1.isRunning() || motor2.isRunning()){
    motor1.run();                   // Executa o motor 1
    motor2.run();                   // Executa o motor 2
  }
}
