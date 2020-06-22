
#include <LiquidCrystal.h>  
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  	
	
String ch="";  	
	
void setup() {  	
  Serial.begin(9600);  	
  	
  lcd.begin(16, 2);  	
}  	
	
void loop() {    
  if(Serial.available()>0)    
    {  
    ch=Serial.readString();  
    }  
  lcd.print(ch);  
  lcd.setCursor(0, 0);   
	
}  
 