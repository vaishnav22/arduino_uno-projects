void setup() {
  pinMode(A0,INPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(A2,HIGH);
  digitalWrite(A1,LOW);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A0));
//  delay(1000);
  if(analogRead(A0) < 500)
  digitalWrite(11,HIGH);
  else
  digitalWrite(11,LOW);
}
