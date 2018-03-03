//version 0.5
//not tested yet
char input;
char mode;
void car_left()
{
 digitalWrite(22,HIGH);
 digitalWrite(23,LOW);
 digitalWrite(24,LOW);
 digitalWrite(25,HIGH);
 digitalWrite(26,HIGH);
 digitalWrite(27,LOW);
 digitalWrite(28,LOW);
 digitalWrite(29,HIGH);
 analogWrite(2,100);
 analogWrite(3,100);
 analogWrite(4,100);
 analogWrite(5,100);
}
void car_right()
{
 digitalWrite(22,LOW);
 digitalWrite(23,HIGH);
 digitalWrite(24,HIGH);
 digitalWrite(25,LOW);
 digitalWrite(26,LOW);
 digitalWrite(27,HIGH);
 digitalWrite(28,HIGH);
 digitalWrite(29,LOW);
 analogWrite(2,100);
 analogWrite(3,100);
 analogWrite(4,100);
 analogWrite(5,100);
}
void car_backward()
{
 digitalWrite(22,LOW);
 digitalWrite(23,HIGH);
 digitalWrite(24,LOW);
 digitalWrite(25,HIGH);
 digitalWrite(26,LOW);
 digitalWrite(27,HIGH);
 digitalWrite(28,LOW);
 digitalWrite(29,HIGH);
 analogWrite(2,255);
 analogWrite(3,255);
 analogWrite(4,255);
 analogWrite(5,255);
}
void car_forward()
{
 digitalWrite(22,HIGH);
 digitalWrite(23,LOW);
 digitalWrite(24,HIGH);
 digitalWrite(25,LOW);
 digitalWrite(26,HIGH);
 digitalWrite(27,LOW);
 digitalWrite(28,HIGH);
 digitalWrite(29,LOW);
 analogWrite(2,255);
 analogWrite(3,255);
 analogWrite(4,255);
 analogWrite(5,255);
}
void car_stop()
{
 digitalWrite(22,LOW);
 digitalWrite(23,LOW);
 digitalWrite(24,LOW);
 digitalWrite(25,LOW);
 digitalWrite(26,LOW);
 digitalWrite(27,LOW);
 digitalWrite(28,LOW);
 digitalWrite(29,LOW);
 analogWrite(2,0);
 analogWrite(3,0);
 analogWrite(4,0);
 analogWrite(5,0);
}
void setup() {
Serial1.begin(9600);
}

void loop() {
if(Serial1.available()>0)
{
input=Serial1.read();
if(input=='B')
{
  mode=input;
}
else if(input=='b')
{
    mode=input;
}
if(mode=='B')
{
if(input=='x')
{
  car_stop();
}
if(input=='w')
{
  car_forward();
}
if(input=='s')
{
  car_backward();
}
if(input=='d')
{
  car_right();
}
if(input=='a')
{
  car_left();
}
}
}
}


