float temp;

void setup()
{
  Serial.begin(9600);
  
}
void loop()
{
  
temp = analogRead(A0);

float temp = ( temp/1024.0)*5000; 

 temp = temp/10;
Serial.print("TEMPERATURE  ");
Serial.print(temp);
Serial.print("*C");
Serial.println();
delay(1000);

}

