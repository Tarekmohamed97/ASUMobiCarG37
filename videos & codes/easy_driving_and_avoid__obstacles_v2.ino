//THIS IS CODE FOR BLUETOOTH CONTROLLING AND AVOIDING OBSTACLES v2
char input;
char mode='B';
long intevral;
void avoid()
{
  digitalWrite(33,HIGH);
delayMicroseconds(10);
digitalWrite(33,LOW);
intevral = pulseIn(35, HIGH);
if(intevral<4000)
{
  //actually this must be measure practical
car_backward();
delay(20);  
car_stop();
delay(1);
car_right();
delay(200);
car_stop();
}
}
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
void setup()
{
Serial.begin(9600);
pinMode(22,OUTPUT);
pinMode(23,OUTPUT);
pinMode(24,OUTPUT);
pinMode(25,OUTPUT);
pinMode(26,OUTPUT);
pinMode(27,OUTPUT);
pinMode(28,OUTPUT);
pinMode(29,OUTPUT);
pinMode(30,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(31,OUTPUT);
pinMode(37,OUTPUT);
digitalWrite(31,LOW);
digitalWrite(37,HIGH);

}

void loop()
{


if(Serial.available()>0)
{
input=Serial.read();
if(input=='B')//turn on and off switch
{
  mode=input;
}
else if(input=='b')
{
    mode=input;
}
if(mode=='B')
{
  avoid();//avoiding OBSTACLES function
  if(intevral>4000)
  {
if(input=='x')
{
  car_stop();
    Serial.write('x');

}
if(input=='w')
{
  car_forward();
    Serial.write('w');

}
if(input=='s')
{
  car_backward();
    Serial.write('s');

}
if(input=='d')
{
  car_right();
    Serial.write('d');

}
if(input=='a')
{
  car_left();
    Serial.write('a');

}
  }
}
}
}


