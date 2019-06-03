int relay0 = 7; // relay pin
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

int triggered = true;         // because crap code

void setup() {
  pinMode(relay0, OUTPUT);
  digitalWrite(relay0, LOW);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue > 800) {
    triggered = false;
  } else {
    triggered = true;
  }
  if (triggered) {
    digitalWrite(relay0, HIGH);
  } else {
    digitalWrite(relay0, LOW);
  }
  delay(5);
}
