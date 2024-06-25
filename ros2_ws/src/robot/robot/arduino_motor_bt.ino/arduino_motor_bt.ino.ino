// 시리얼 통신
#include <SoftwareSerial.h>
#define BtTxpin A4
#define BtRxPin A5
SoftwareSerial BTSerial(BtTxpin, BtRxPin);

// #include <ros.h>
#include <std_msgs/String.h>

const int MotorL_A = 8;
const int MotorL_B = 9;
const int MotorL_PWM = 10;
const int MotorR_PWM = 11;
const int MotorR_A = 12;
const int MotorR_B = 13;

const int FIXED_SPEED = 125

// ros::NodeHandle nh;

void motorCallback(const std_msgs::String& msg){
  String command = msg.data.c_str();

  if(command == "go"){
    // 전진 로직
    MotorL(FIXED_SPEED)
    MotorR(FIXED_SPEED)
  }
  else if(command == "left"){
    // 좌회전 로직
    MotorL(-FIXED_SPEED)
    MotorR(FIXED_SPEED)
  }
  else if(command == "right"){
    // 우회전 로직
    MotorL(FIXED_SPEED)
    MotorR(-FIXED_SPEED)
  }
  else if(command == "back"){
    // 후진 로직
    MotorL(-FIXED_SPEED)
    MotorR(-FIXED_SPEED)
  }
  else if(command == "stop"){
    // 멈춤
    MotorL(0)
    MotorR(0)
  }
}

//왼쪽바퀴 제어
void MotorL(int SPEEDL)
{
  if (SPEEDL > 0) {   //왼쪽바퀴 후진
    digitalWrite(MotorL_A, LOW); 
    digitalWrite(MotorL_B, HIGH);
  }
  else if (SPEEDL < 0) {  //왼쪽바퀴 전진
    digitalWrite(MotorL_A, HIGH);
    digitalWrite(MotorL_B, LOW);
  }
  else {    /왼쪽바퀴 정지
    digitalWrite(MotorL_A, LOW);
    digitalWrite(MotorL_B, LOW);
  }

  analogWrite(MotorL_PWM, abs(SPEEDL));
}

//오른쪽바퀴 제어
void MotorR(int SPEEDR)
{
  if (SPEEDR > 0) {   //오른쪽바퀴 후진
    digitalWrite(MotorR_A, HIGH);
    digitalWrite(MotorR_B, LOW);
  }
  else if (SPEEDR < 0) {    //오른쪽바퀴 전진
    digitalWrite(MotorR_A, LOW);
    digitalWrite(MotorR_B, HIGH);
  }
  else {    //오른쪽바퀴 정지
    digitalWrite(MotorR_A, LOW);
    digitalWrite(MotorR_B, LOW);
  }

  analogWrite(MotorR_PWM, abs(SPEEDR));
}

// ros::Subscriber<std_msgs::String> sub("switch_topic", motorCallback);

void setup() {
  // nh.initNode();
  // nh.subscribe(sub);

  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(MotorL_A, OUTPUT);
  pinMode(MotorL_B, OUTPUT);
  pinMode(MotorR_A, OUTPUT);
  pinMode(MotorR_B, OUTPUT);
  pinMode(MotorL_PWM, OUTPUT);
  pinMode(MotorR_PWM, OUTPUT);
}

void loop() {
  // nh.spinOnce();

  //블루투스 센서 작동
  if (BTSerial.available()) {
    String command = "";
    while (BTSerial.available()) {
      char c = (char)BTSerial.read();
      command += c;
      delay(5);
    }

    Serial.println(command);

    std_msgs::String msg;
    msg.data = command.c_str();

    motorCallback(msg);
  }

  delay(1);
}