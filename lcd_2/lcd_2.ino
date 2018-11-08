#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() 
{
lcd.begin(16, 2); 
lcd.print(" paa"); 
lcd.setCursor(0, 1);
lcd.print(" I LOVE YOU");
delay(2000);
  }
 


void loop() {

}
