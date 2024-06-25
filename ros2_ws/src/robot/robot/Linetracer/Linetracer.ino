//선언
#include <SoftwareSerial.h>
#define BtTxpin A4
#define BtRxPin A5
SoftwareSerial BTSerial(BtTxpin, BtRxPin);

const int pingPin = 7;

const int MotorL_A = 8;
const int MotorL_B = 9;
const int MotorL_PWM = 10;
const int MotorR_PWM = 11;
const int MotorR_A = 12;
const int MotorR_B = 13;

long IR1 = A0;
long IR2 = A1;
long IR3 = A2;
long IR4 = A3;

long IRO1 = HIGH;
long IRO2 = HIGH;
long IRO3 = HIGH;
long IRO4 = HIGH;


//setup
void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(MotorL_A, OUTPUT);
  pinMode(MotorL_B, OUTPUT);
  pinMode(MotorR_A, OUTPUT);
  pinMode(MotorR_B, OUTPUT);
  pinMode(MotorL_PWM, OUTPUT);
  pinMode(MotorR_PWM, OUTPUT);

  pinMode(IR1, INPUT);
  pinMode(IR2, INPUT);
  pinMode(IR3, INPUT);
  pinMode(IR4, INPUT);
}

//초음파 센서- 거리 환산(cm으로)
long microsecondsToCentimeters(long microseconds
{
  return microseconds / 29 / 2;
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


void MotorControlL(int SpeedL) {
  MotorL(SpeedL);
}
void MotorControlR(int SpeedR) {
  MotorR(SpeedR);
}


void loop()            
{

  long duration, cm;
  char val;
//초음파센서 작동
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  cm = microsecondsToCentimeters(duration);
  Serial.print(cm);
  Serial.println();
  //적외선 센서 작동
  IRO1 = digitalRead(IR1);
  IRO2 = digitalRead(IR2);
  IRO3 = digitalRead(IR3);
  IRO4 = digitalRead(IR4);
//블루투스 센서 작동
  if (BTSerial.available()) {
    val = BTSerial.read();
    Serial.write(val);
  }
  
//LOGIC
  if (val == 'g') {             //블루투스 출발신호(g)를 받을 경우
    if (cm > 8) {               //라인트레이서앞에 장애물이 없을 경우
      if (IRO4 == LOW) {        //오른쪽 안쪽 센서에 적외선 신호가 없을 경우
        if (IRO2 == LOW) {      //오른쪽 바깥 센서에 적외선 신호가 없을 경우
          MotorControlR(235);   //오른쪽 바퀴 후진
        }
        else {
          MotorControlR(-255);  //오른쪽 바퀴 후진
        }
      }
      else {
        MotorControlR(-255);    //오른쪽 바퀴 전진
      }
      if (IRO3 == LOW) {
        if (IRO1 == LOW) {
          MotorControlL(255);   //왼쪽 바퀴 후진
        }
        else {
          MotorControlL(-255);  //왼쪽 바퀴 전진
        }
      }
      else {
        MotorControlL(-255);     //왼쪽 바퀴 전진
      }
    }
    else {                        //정지
      MotorControlL(0);
      MotorControlR(0);
      delay(3000);                 //3초동안
    }
  }
  if (val == 's') {               //블루투스 정지신호(s)를 받을경우
    MotorControlL(0);             //정지
    MotorControlR(0);
  }
}
