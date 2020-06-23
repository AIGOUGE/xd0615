#include <MsTimer2.h>   	

int tick = -1; 	
byte income=0;	
void onTimer()	
{	
  Serial.println(tick++);	
  digitalWrite(8,HIGH);	
  digitalWrite(9,HIGH);	
    income=tick;	
    income=income-'0';	
    digitalWrite(4,income&0x1);	
    digitalWrite(5,(income>>1)&0x1);	
    digitalWrite(6,(income>>2)&0x1);	
    digitalWrite(7,(income>>3)&0x1);	
  if(tick==9)	
  {	
    tick=-1;	
  }	
    	
}	
 	
void setup()	
{	
  Serial.begin(9600);	
  	
  pinMode(3, OUTPUT);	
  pinMode(4, OUTPUT);	
  pinMode(5, OUTPUT);	
  pinMode(6, OUTPUT);	
   	
    	
  	
  MsTimer2::set(1000, onTimer); 	
  MsTimer2::start(); 		
}	
	
void loop()	
 	
{	
  if(digitalRead(2)==LOW)	
  {	
    tick=-1;	
  }	
  	
}	
