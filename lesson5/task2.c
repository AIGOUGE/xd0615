#define IN1 2  
#define IN2 3  
#define IN3 4  
#define IN4 5  

#define S1 8  
#define S2 9  
#define S3 10  
#define S4 11  

#define LT 6  
#define BT 7  
void setup()  
{  
  pinMode(IN1, OUTPUT);//����1  
  pinMode(IN2, OUTPUT);//����2  
  pinMode(IN3, OUTPUT);//����3  
  pinMode(IN4, OUTPUT);//����4  
  pinMode(S1, OUTPUT);//Ƭѡ1  
  pinMode(S2, OUTPUT);//Ƭѡ2  
  pinMode(S3, OUTPUT);//Ƭѡ3  
  pinMode(S4, OUTPUT);//Ƭѡ4   
    
  pinMode(LT,OUTPUT);//����	
  pinMode(BT,OUTPUT);//����	
    
  digitalWrite(LT,HIGH);	
  digitalWrite(BT,HIGH);	
  
  digitalWrite(S1,HIGH);	
  digitalWrite(S2,HIGH);	
  digitalWrite(S3,HIGH);	
  digitalWrite(S4,HIGH);	
  
  Serial.begin(9600);	
  
}	
byte income1=0;	
byte income2=0;	
byte income3=0;	
byte income4=0;	
int i=0;	

void loop()	
{	
  if(Serial.available()>0)	
  {	
    
    digitalWrite(S1,LOW);	
    income1=Serial.read();	
    income1=income1-'0';		
    digitalWrite(IN1,income1&0x1);	
    digitalWrite(IN2,(income1>>1)&0x1);	
    digitalWrite(IN3,(income1>>2)&0x1);	
    digitalWrite(IN4,(income1>>3)&0x1);	
    digitalWrite(S1,HIGH);	
    delay(10);	
    
    digitalWrite(S2,LOW);	
    income2=Serial.read();	
    income2=income2-'0';		
    digitalWrite(IN1,income2&0x1);	
    digitalWrite(IN2,(income2>>1)&0x1);	
    digitalWrite(IN3,(income2>>2)&0x1);	
    digitalWrite(IN4,(income2>>3)&0x1);	
    digitalWrite(S2,HIGH);	
    delay(10);	
    
    digitalWrite(S3,LOW);	
    income3=Serial.read();	
    income3=income3-'0';	
    digitalWrite(IN1,income3&0x1);	
    digitalWrite(IN2,(income3>>1)&0x1);	
    digitalWrite(IN3,(income3>>2)&0x1);	
    digitalWrite(IN4,(income3>>3)&0x1);	
    digitalWrite(S3,HIGH);	
    delay(10);	
    
    digitalWrite(S4,LOW);	
    income4=Serial.read();	
    income4=income4-'0';	
    digitalWrite(IN1,income4&0x1);	
    digitalWrite(IN2,(income4>>1)&0x1);	
    digitalWrite(IN3,(income4>>2)&0x1);	
    digitalWrite(IN4,(income4>>3)&0x1);	
    digitalWrite(S4,HIGH);	
    delay(10);	
 
    
  }	
}	
