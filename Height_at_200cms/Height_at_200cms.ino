const int trigPin = 12;

const int echoPin = 11;


void setup() {

Serial.begin(9600);}

void loop()

{

long duration, inches, cm;

pinMode(trigPin, OUTPUT);

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

pinMode(echoPin, INPUT);

duration = pulseIn(echoPin, HIGH);

inches = microsecondsToInches(duration);

cm = microsecondsToCentimeters(duration);
cm=200-cm; // place here your distance sensor height

Serial.print(inches);

Serial.print("in, ");

Serial.print(cm);

Serial.print("cm");

Serial.println();

delay(100);

}

long microsecondsToInches(long microseconds)

{return microseconds / 74 / 2;

}

long microsecondsToCentimeters(long microseconds)

{return microseconds / 29 / 2;}
