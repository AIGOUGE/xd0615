
int sensorValue = 0;	//定义变量，并初始化为0	

void setup()	
{	
  pinMode(A0, INPUT);	//设置引脚A0为输入		
  Serial.begin(9600);	//初始化串口通信，设置波特率为9600	
	
}	

void loop()	
{		
  sensorValue = analogRead(A0);			
  //读取输入在引脚A0上的模拟电压量，并赋值给变量sensorValue		
  Serial.println(sensorValue);	//显示变量sensorValue的值		
  delay(10);	// 延迟10ms后再次执行		
}	