
int sensorValue = 0;	//�������������ʼ��Ϊ0	

void setup()	
{	
  pinMode(A0, INPUT);	//��������A0Ϊ����		
  Serial.begin(9600);	//��ʼ������ͨ�ţ����ò�����Ϊ9600	
	
}	

void loop()	
{		
  sensorValue = analogRead(A0);			
  //��ȡ����������A0�ϵ�ģ���ѹ��������ֵ������sensorValue		
  Serial.println(sensorValue);	//��ʾ����sensorValue��ֵ		
  delay(10);	// �ӳ�10ms���ٴ�ִ��		
}	