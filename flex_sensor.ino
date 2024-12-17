const int led=13;
const int flex=A0;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(flex,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = analogRead(flex);
Serial.println(val);
val = map(val,700,900,0,255);
analogWrite(led,val);
delay(100);
}
