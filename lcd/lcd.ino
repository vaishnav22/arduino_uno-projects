

#include <LiquidCrystal.h>  
int Con=2000;
 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);   

 void setup()
 { 
    analogWrite(6,Con);
     lcd.begin(16, 2);
     lcd.print("hello evveryone");
     delay(1000);
  }  
     void loop()
 {  
  for(int positionCounter = 0;positionCounter <13;positionCounter++) {
    lcd.scrollDisplayLeft();
    delay(400);
  }


  for(int positionCounter = 0;positionCounter <27; positionCounter++){
     lcd.scrollDisplayLeft();
     delay(400);
  }
  delay(50000);
  
 }
  
