int relay0 = 7;       // relay pin
int sensorPin = A0;   // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int LEDTRIGGERED = 12;

int triggered = false;

void setup() {
  pinMode(relay0, OUTPUT);
  digitalWrite(LEDTRIGGERED, OUTPUT);

  digitalWrite(relay0, LOW);
  digitalWrite(LEDTRIGGERED, LOW);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue > 800) {
    triggered = true;
  } else {
    triggered = false;
  }
  if (triggered) {
    digitalWrite(relay0, HIGH);
    digitalWrite(LEDTRIGGERED, HIGH);
  } else {
    digitalWrite(relay0, LOW);
    digitalWrite(LEDTRIGGERED, LOW);
  }
  delay(5);
}
