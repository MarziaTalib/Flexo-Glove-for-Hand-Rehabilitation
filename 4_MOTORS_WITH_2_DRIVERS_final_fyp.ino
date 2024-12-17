int in=A0;
int in1=A1;
int in2=A2;
int in3=A3;
String text;
int var = 0;
int motorspeed = 255;
const int pwm1 = 11 ; //initializing pin 2 as pwm
const int in_1 = 8 ;
const int in_2 = 9 ;

const int pwm2 = 10 ; //initializing pin 2 as pwm
const int in_3 = 12 ;
const int in_4 = 13;

const int pwm3 = 5 ; //initializing pin 2 as pwm
const int in_5 = 2 ;
const int in_6 = 4 ;

const int pwm4 = 3 ; //initializing pin 2 as pwm
const int in_7 = 6 ;
const int in_8 = 7;
//For providing logic to L298 IC to choose the direction of the DC motor

void setup() {
   pinMode(pwm1,OUTPUT) ; //we have to set PWM pin as output
   pinMode(in_1,OUTPUT) ; //Logic pins are also set as output
   pinMode(in_2,OUTPUT) ;
    pinMode(pwm2,OUTPUT) ; //we have to set PWM pin as output
   pinMode(in_3,OUTPUT) ; //Logic pins are also set as output
   pinMode(in_4,OUTPUT) ;
   pinMode(pwm3,OUTPUT) ; //we have to set PWM pin as output
   pinMode(in_5,OUTPUT) ; //Logic pins are also set as output
   pinMode(in_6,OUTPUT) ;
    pinMode(pwm4,OUTPUT) ; //we have to set PWM pin as output
   pinMode(in_7,OUTPUT) ; //Logic pins are also set as output
   pinMode(in_8,OUTPUT) ;
   //pinMode(in,INPUT);
   //pinMode(in1,INPUT);
   //pinMode(in2,INPUT);
   //pinMode(in3,INPUT);
   Serial.begin(9600);
}

void loop() {
  //byte val = map(analogRead(in),0,1024.0,0,255);
  //Serial.write(val);
  //delay(400);
  while (Serial.available())
{delay(10);
char c = Serial.read();
text+=c;}
if(text.length()>0)
{Serial.println(text);

if(text=="routine1")
{
  direction1();
}
if(text=="routine2")
{
  direction2();
}
if(text=="routine3")
{
  direction3();
}
if(text=="routine4")
{
  direction4();
}

if(text=="routine5")
{
  direction5();
}

//if(text=="speed"){
  //String sS = Serial.readString();
  //motorspeed = sS.toInt();
  //Serial.println(motorspeed);
//}
text="";
}
}
void direction1()
{
   //For Clock wise motion , in_1 = High , in_2 = Low
   digitalWrite(in_1,HIGH) ;
   digitalWrite(in_2,LOW) ;
   analogWrite(pwm1,motorspeed);
   /* setting pwm of the motor to 255 we can change the speed of rotation
   by changing pwm input but we are only using arduino so we are using highest
   value to driver the motor */
   //Clockwise for 1 secs
   delay(600) ;
   //For brake
   digitalWrite(in_1,HIGH) ;
   digitalWrite(in_2,HIGH) ;
  analogWrite(pwm1,motorspeed);
   delay(600) ;
   //For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
   digitalWrite(in_1,LOW) ;
   digitalWrite(in_2,HIGH) ;
   analogWrite(pwm1,motorspeed);
   delay(600) ;
   digitalWrite(in_1,HIGH) ;
   digitalWrite(in_2,HIGH) ;
  analogWrite(pwm1,motorspeed);
   delay(600) ;
}
void direction2()
{//For Clock wise motion , in_1 = High , in_2 = Low
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,LOW) ;
   analogWrite(pwm2,motorspeed);
   /* setting pwm of the motor to 255 we can change the speed of rotation
   by changing pwm input but we are only using arduino so we are using highest
   value to driver the motor */
   //Clockwise for 1 secs
   delay(600) ;
   //For brake
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,HIGH) ;
   analogWrite(pwm2,motorspeed);
   delay(600) ;
   //For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
   digitalWrite(in_3,LOW) ;
   digitalWrite(in_4,HIGH) ;
   analogWrite(pwm2,motorspeed);
   delay(600) ;
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,HIGH) ;
  analogWrite(pwm2,motorspeed);
   delay(600) ;
  }
  void direction3()
{
   //For Clock wise motion , in_1 = High , in_2 = Low
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_6,LOW) ;
   analogWrite(pwm3,motorspeed);
   /* setting pwm of the motor to 255 we can change the speed of rotation
   by changing pwm input but we are only using arduino so we are using highest
   value to driver the motor */
   //Clockwise for 1 secs
   delay(600) ;
   //For brake
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_6,HIGH) ;
   analogWrite(pwm3,motorspeed);
   delay(600) ;
   //For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
   digitalWrite(in_5,LOW) ;
   digitalWrite(in_6,HIGH) ;
   analogWrite(pwm3,motorspeed);
   delay(600) ;
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_6,HIGH) ;
  analogWrite(pwm3,motorspeed);
   delay(600) ;
}

 void direction4()
{
   //For Clock wise motion , in_1 = High , in_2 = Low
   digitalWrite(in_7,HIGH) ;
   digitalWrite(in_8,LOW) ;
   analogWrite(pwm4,motorspeed);
   /* setting pwm of the motor to 255 we can change the speed of rotation
   by changing pwm input but we are only using arduino so we are using highest
   value to driver the motor */
   //Clockwise for 1 secs
   delay(600) ;
   //For brake
   digitalWrite(in_7,HIGH) ;
   digitalWrite(in_8,HIGH) ;
   analogWrite(pwm4,motorspeed);
   delay(600) ;
   //For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
   digitalWrite(in_7,LOW) ;
   digitalWrite(in_8,HIGH) ;
   analogWrite(pwm4,motorspeed);
   delay(600) ;
   digitalWrite(in_7,HIGH) ;
   digitalWrite(in_8,HIGH) ;
  analogWrite(pwm4,motorspeed);
   delay(600) ;
}

 void direction5()
{
   //For Clock wise motion , in_1 = High , in_2 = Low
   digitalWrite(in_1,HIGH) ;
   digitalWrite(in_2,LOW) ;
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,LOW) ;
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_6,LOW) ;
   digitalWrite(in_7,HIGH) ;
   digitalWrite(in_8,LOW) ;
   analogWrite(pwm1,motorspeed);
   analogWrite(pwm2,motorspeed);
   analogWrite(pwm3,motorspeed);
   analogWrite(pwm4,motorspeed);
   /* setting pwm of the motor to 255 we can change the speed of rotation
   by changing pwm input but we are only using arduino so we are using highest
   value to driver the motor */
   //Clockwise for 1 secs
   delay(600) ;
   //For brake
   digitalWrite(in_1,HIGH) ;
   digitalWrite(in_2,HIGH) ;
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_6,HIGH) ;
   digitalWrite(in_7,HIGH) ;
   digitalWrite(in_8,HIGH) ;
   analogWrite(pwm1,motorspeed);
   analogWrite(pwm2,motorspeed);
   analogWrite(pwm3,motorspeed);
   analogWrite(pwm4,motorspeed);
   delay(600) ;
   //For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
   digitalWrite(in_1,LOW) ;
   digitalWrite(in_2,HIGH) ;
   digitalWrite(in_3,LOW) ;
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_5,LOW) ;
   digitalWrite(in_6,HIGH) ;
   digitalWrite(in_7,LOW) ;
   digitalWrite(in_8,HIGH) ;
   analogWrite(pwm1,motorspeed);
   analogWrite(pwm2,motorspeed);
   analogWrite(pwm3,motorspeed);
   analogWrite(pwm4,motorspeed);
   delay(600) ;
   digitalWrite(in_1,HIGH) ;
   digitalWrite(in_2,HIGH) ;
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,HIGH) ;
   digitalWrite(in_5,HIGH) ;
   digitalWrite(in_6,HIGH) ;
   digitalWrite(in_7,HIGH) ;
   digitalWrite(in_8,HIGH) ;
   analogWrite(pwm1,motorspeed);
   analogWrite(pwm2,motorspeed);
   analogWrite(pwm3,motorspeed);
   analogWrite(pwm4,motorspeed);
   delay(600) ;
}
