#include <Arduino.h>
#include <Wire.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(19,23,18,17,16,15);
const int rs = 19, en = 23, d4 = 18, d5 = 17, d6 = 16, d7 = 15;
char text[]="CAR PARKING ";
char text1[]="-> -> -> ->";
void setup() {
lcd.begin(16, 2);
    //*lcd.clear();*
   //* lcd.print("Welcome");*

    // go to row 1 column 0, note that this is indexed at 0
    //* lcd.setCursor(0,1); *
    //* lcd.print ("Hallo");
}

void loop() {
unsigned int i=0;
unsigned int j=0;
lcd.setCursor(0,0);

while (text[i]!='\0')
{
  /* code */
lcd.print(text[i]);
if(i>=40)
	{
  
  lcd.command(0x18); //Scrolling text to Right
    
  }
   delay(200);
   i++;
   
}
lcd.setCursor(5,1);
while (text1[j]!='\0')
{
  /* code */

lcd.print(text1[j]);

if(j>=20)
	{
    lcd.command(0x18); //Scrolling text to Right
  }
   delay(200);
   j++;
   
}
lcd.clear();
} 
