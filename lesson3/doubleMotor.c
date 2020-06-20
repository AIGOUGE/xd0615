char ch=' ';    
void setup()   
{  
  Serial.begin(9600);   
  pinMode(3,OUTPUT);   
  pinMode(4,OUTPUT);   
  pinMode(5,OUTPUT);   
  pinMode(6,OUTPUT);   
  Serial.println("ok!");   
}     


void loop()       
{       
  if(Serial.available()>0)   
  {     
  	ch=Serial.read();       
    switch(ch)     
    {     
    case 'f':      
      digitalWrite(3,HIGH);     
      digitalWrite(4,LOW);     
      digitalWrite(5,HIGH);     
      digitalWrite(6,LOW);     
      break;     
    case 'b':     
      digitalWrite(4,HIGH);     
      digitalWrite(3,LOW);     
      digitalWrite(6,HIGH);     
      digitalWrite(5,LOW);     
      break;     
    case 'r':     
      digitalWrite(4,HIGH);     
      digitalWrite(3,LOW);     
      digitalWrite(5,HIGH);     
      digitalWrite(6,LOW);     
      break;     
    case 'l':     
      digitalWrite(3,HIGH);     
      digitalWrite(4,LOW);     
      digitalWrite(6,HIGH);     
      digitalWrite(5,LOW);     
      break;     
    case 's':     
      digitalWrite(3,LOW);     
      digitalWrite(4,LOW);     
      digitalWrite(5,LOW);     
      digitalWrite(6,LOW);     
      break;     
    default:     
      break;     
    }     
  }     
}     