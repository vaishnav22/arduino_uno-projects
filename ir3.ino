void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3) == LOW)
  {
    digitalWrite(13,HIGH);
    Serial.println("Obsical on the way");
    delay(10);
  }
  else {
    digitalWrite(13,LOW);
    delay(10);
    Serial.println("ALL CLEAR");
  }

}
