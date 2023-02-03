#include <AFMotor.h>
#include <SoftwareSerial.h>


char dato = 0;
AF_DCMotor MotorA(1);
AF_DCMotor MotorB(2);
AF_DCMotor MotorC(3);
AF_DCMotor MotorD(4);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);		// comunicacion de monitor serial a 9600 bps
  Serial.println("Listo");	// escribe Listo en el monitor
  Serial3.begin(38400);	
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial3.available()){
    dato = Serial3.read();
    Serial.write(dato);
  }     	
  switch(dato){
    case 'a':
      MotorA.run(BACKWARD);
      MotorB.run(FORWARD);
      MotorC.run(FORWARD);
      MotorD.run(BACKWARD);
      MotorA.setSpeed(100);
      MotorB.setSpeed(100);
      MotorC.setSpeed(100);
      MotorD.setSpeed(100);
      break;  
    case 'A':
    MotorA.run(RELEASE);
    MotorB.run(RELEASE);
    MotorC.run(RELEASE);
    MotorD.run(RELEASE);
      break;
    }
}
