#include <Servo.h>

Servo myServo;

const int sensorPin = 6;
const int servoPin = 7;

long duration, dist;
bool isOpen = false;
unsigned long noObjectStartTime = 0;

const int openPos = 15;      // Open position
const int closedPos = 75;    // Closed position

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, OUTPUT);
  myServo.attach(servoPin);
  myServo.write(closedPos); // Start closed
  delay(100);
}

void loop() {
  // Send pulse
  pinMode(sensorPin, OUTPUT);
  digitalWrite(sensorPin, LOW);
  delayMicroseconds(2);
  digitalWrite(sensorPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(sensorPin, LOW);

  // Read echo
  pinMode(sensorPin, INPUT);
  duration = pulseIn(sensorPin, HIGH);

  dist = (duration / 2) / 29.1;
  Serial.println(dist);

  if (dist < 50) {
    // Object is near
    noObjectStartTime = 0;

    if (!isOpen) {
      // Slowly open (70 to 10)
      for (int pos = closedPos; pos >= openPos; pos--) {
        myServo.write(pos);
        delay(15);
      }
      isOpen = true;
    }

  } else {
    // Object is not near
    if (isOpen) {
      if (noObjectStartTime == 0) {
        noObjectStartTime = millis();
      } else if (millis() - noObjectStartTime > 3000) {
        // Slowly close (10 to 70)
        for (int pos = openPos; pos <= closedPos; pos++) {
          myServo.write(pos);
          delay(10);
        }
        isOpen = false;
        noObjectStartTime = 0;
      }
    }
  }

  delay(100);
}
