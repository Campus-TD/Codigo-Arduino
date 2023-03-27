const int motorA1 = 7;
const int motorA2 = 6;
const int motorAspeed = 9;
const int motorB1 = 5;
const int motorB2 = 4;
const int motorBspeed = 3;

int state;
int vSpeed = 200;
char dato;

void setup() {
  Serial.begin(9600);
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    //Serial.println(Serial.readString());
    dato = Serial.read();
    Serial.println(dato);
  }

  switch (dato) {
    case '0': vSpeed = 0; break;
    case '1': vSpeed = 100; break;
    case '2': vSpeed = 180; break;
    case '3': vSpeed = 200; break;
    case '4': vSpeed = 255; break;
  }

  switch (dato) {
    case 'F':
      digitalWrite(motorA1, LOW);
      delay(1);
      digitalWrite(motorA2, HIGH);
      delay(1);

      digitalWrite(motorB1, LOW);
      delay(1);
      digitalWrite(motorB2, HIGH);

      analogWrite(motorAspeed, vSpeed);
      analogWrite(motorBspeed, vSpeed);
      break;

    case 'I':
      digitalWrite(motorA1, LOW);
      delay(1);
      digitalWrite(motorA2, HIGH);
      delay(1);

      digitalWrite(motorB1, LOW);
      delay(1);
      digitalWrite(motorB2, HIGH);

      analogWrite(motorAspeed, 0);
      analogWrite(motorBspeed, vSpeed);
      break;

    case 'G':
      digitalWrite(motorA1, LOW);
      delay(1);
      digitalWrite(motorA2, HIGH);
      delay(1);

      digitalWrite(motorB1, LOW);
      delay(1);
      digitalWrite(motorB2, HIGH);

      analogWrite(motorAspeed, vSpeed);
      analogWrite(motorBspeed, 0);
      break;

    case 'B':
      digitalWrite(motorA1, HIGH);
      delay(1);
      digitalWrite(motorA2, LOW);
      delay(1);

      digitalWrite(motorB1, HIGH);
      delay(1);
      digitalWrite(motorB2, LOW);

      analogWrite(motorAspeed, vSpeed);
      analogWrite(motorBspeed, vSpeed);
      break;

    case 'J':
      digitalWrite(motorA1, HIGH);
      delay(1);
      digitalWrite(motorA2, LOW);
      delay(1);

      digitalWrite(motorB1, HIGH);
      delay(1);
      digitalWrite(motorB2, LOW);

      analogWrite(motorAspeed, 0);
      analogWrite(motorBspeed, vSpeed);
      break;

    case 'H':
      digitalWrite(motorA1, HIGH);
      delay(1);
      digitalWrite(motorA2, LOW);
      delay(1);

      digitalWrite(motorB1, HIGH);
      delay(1);
      digitalWrite(motorB2, LOW);

      analogWrite(motorAspeed, vSpeed);
      analogWrite(motorBspeed, 0);
      break;

    case 'L':
      digitalWrite(motorA2, HIGH);
      delay(1);
      digitalWrite(motorA1, LOW);
      delay(1);

      digitalWrite(motorB2, LOW);
      delay(1);
      digitalWrite(motorB1, HIGH);

      analogWrite(motorAspeed, vSpeed);
      analogWrite(motorBspeed, vSpeed);
      break;

    case 'R':
      digitalWrite(motorA2, LOW);
      delay(1);
      digitalWrite(motorA1, HIGH);
      delay(1);

      digitalWrite(motorB2, HIGH);
      delay(1);
      digitalWrite(motorB1, LOW);

      analogWrite(motorAspeed, vSpeed);
      analogWrite(motorBspeed, vSpeed);
      break;

    default:
      analogWrite(motorA1, 0);
      analogWrite(motorA2, 0);
      analogWrite(motorB1, 0);
      analogWrite(motorB2, 0);
      break;
  }
}