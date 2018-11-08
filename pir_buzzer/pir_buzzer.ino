int LED = 4;
int PIR = 7;
int Buzzer = 2;

void setup() {
  //define the LED and Buzzer pin as output
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  //define the sensor pin as input
  pinMode(PIR, INPUT);
}

void loop() {
  //using the digitalRead function we will read the signal of the sensor
  int value = digitalRead(PIR);
  //if its high or if an any object is detected it will activate the LED and Buzzer
  if (value == HIGH){
    digitalWrite(LED, HIGH);
    digitalWrite(Buzzer, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
    digitalWrite(Buzzer, LOW);
  }
}
