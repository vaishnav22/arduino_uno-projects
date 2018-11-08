/*
This example will show you how to use the KY-039 heart bear sensor.
Its a simple basic heart beat monitor with a LCD1602A. In this example i did not use a I2C for those who dont have it.
 */
#include <Wire.h>
//#include <LiquidCrystal_I2C.h>//uncomment when using a I2C

//LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);// Uncomment when using a I2C
//make sure you set the right adress. here are the most common ones.
//PCF8574 = 0x20, PCF8574A = 0x38, PCF8574AT = 0x3F.

   
void setup(void)
{
   pinMode(A0,INPUT);
}

void loop(void)
{
   static double oldValue=0;
   static double oldrefresh=0;
 
   int beat=analogRead(A0);
  
   double value=alpha*oldValue+(0-alpha)*beat;
   refresh=value-oldValue;
  
  
 
   
   Serial.print(" Heart Monitor "); 
   delay(1000);
   Serial.print("          ");
   Serial.print(beat/10);
   oldValue=value;
   oldrefresh=refresh;
   delay(period*10);

  
}
