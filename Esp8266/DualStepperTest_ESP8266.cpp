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
  motor1.setMaxSpeed(1000);
  motor2.setMaxSpeed(1000);

  motor1.setAcceleration(5000);
  motor2.setAcceleration(5000);

  Serial.begin(9600);
}

void loop() {
  motor1.moveTo(2000);
  motor2.moveTo(2000);

  while (motor1.isRunning() || motor2.isRunning()) {
        motor1.run();
        motor2.run();
    }

  motor1.moveTo(0);
  motor2.moveTo(0);

  while (motor1.isRunning() || motor2.isRunning()){
    motor1.run();
    motor2.run();
  }
  
}