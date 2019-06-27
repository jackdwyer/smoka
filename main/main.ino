int relay0 = 7;       // relay pin
int sensorPin = A0;   // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

int triggered = false;
const int period = 10;
unsigned long time_now = 0;

void setup() {
  Serial.begin(9600);
  pinMode(relay0, OUTPUT);
  digitalWrite(relay0, LOW);
}

void loop() {

  if(millis() > time_now + period){
    sensorValue = analogRead(sensorPin);
    time_now = millis();
    Serial.print(time_now);
    Serial.print(",");
    Serial.println(sensorValue);


    if (sensorValue > 800) {
      triggered = true;
    } else {
      triggered = false;
    }
    if (triggered) {
      digitalWrite(relay0, HIGH);
    } else {
      digitalWrite(relay0, LOW);
    }
  }
  // delay(5);
}
