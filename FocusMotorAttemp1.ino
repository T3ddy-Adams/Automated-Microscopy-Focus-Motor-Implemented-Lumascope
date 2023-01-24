#include <Adafruit_PWMServoDriver.h>

#include <Adafruit_CircuitPlayground.h>
#include <Adafruit_Circuit_Playground.h>

#include <Adafruit_MotorShield.h>

#include <Adafruit_I2CDevice.h>
#include <Adafruit_I2CRegister.h>
#include <Adafruit_SPIDevice.h>
#include <Adafruit_BusIO_Register.h>

#include <AFMotor.h>

#include <Wire.h>
#include <Adafruit_MotorShield.h>
//#include "utility/Adafruit_PWMServoDriver.h"

Adafruit_MotorShield AFMS = Adafruit_MotorShield(); 
Adafruit_StepperMotor *zMotor = AFMS.getStepper(400, 1);

void setup() 
{ 
  zMotor->setSpeed(2);
  zMotor->step(10, FORWARD , SINGLE);
}

void loop() {
 
}
