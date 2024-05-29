//**********************************************************************************
/*  
 * 名称   : Touch_Control_LED
 * 功能   : 触摸传感器控制LED
 * 作者   : http://www.keyes-robot.com/ 
*/
int item = 0;

void setup() {
  Serial.begin(9600); //设置串口波特率为9600
  pinMode(3, INPUT);  //触摸传感器连接D3上，并设置为输入模式
  pinMode(5, OUTPUT);  //将LED连接到D5上，并设置为输出模式
}

void loop() {
  item = digitalRead(3);  //读取触摸传感器输出的数字信号
  Serial.println(item);  //串口打印触摸传感器输出的数字信号
  if (item == 1) {  //触摸传感器模块上的感应区感应到触摸
    digitalWrite(5, HIGH);  //打开LED
    delay(500);  //延迟 500ms
    digitalWrite(5, LOW);  //关闭LED
    delay(500);  //延迟 500ms
  } else {  //感应区没有感应到触摸
    digitalWrite(5, LOW);  //关闭LED
  }
}
//**********************************************************************************