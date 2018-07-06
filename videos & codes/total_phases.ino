#define r_sensor 40
#define m_sensor 41
#define l_sensor 42
char input;
char mode;
int p=0;

void circle()
{
   car_forward(75,250);
    delay(6400);
    car_stop();
}
  void rectangle()
{
    car_forward(125,205);
    delay(100*16.4);
    car_stop();
    delay(1000);
    car_left(150);
    delay(105*3.88);
    car_stop();
    delay(1000);
    car_forward(125,205);
    delay(100*16.4);
    car_stop();
    delay(1000);
    car_left(150);
    delay(105*3.88);
    car_stop();
    delay(1000);
    car_forward(125,205);
    delay(100*16.4);
    car_stop();
    delay(1000);
    car_left(150);
    delay(105*3.88);
    car_stop();
    delay(1000);
    car_forward(125,205);
    delay(100*16.4);
    car_stop();
    delay(1000);
    car_left(150);
    delay(105*3.88);
    car_stop();
  }
  void infinite()
  {
  car_forward(75,250);
    delay(6470);
    car_stop();
    car_forward(254,90);
    delay(6470);
    car_stop();
  }
void car_left(byte x)
{ 

 digitalWrite(22,HIGH);
 digitalWrite(23,LOW);
 digitalWrite(24,LOW);
 digitalWrite(25,HIGH);
 digitalWrite(26,HIGH);
 digitalWrite(27,LOW);
 digitalWrite(28,LOW);
 digitalWrite(29,HIGH);
 analogWrite(2,x);
 analogWrite(3,x);
 analogWrite(4,x);
 analogWrite(5,x);
}
void car_right(byte x)
{ 

 digitalWrite(22,LOW);
 digitalWrite(23,HIGH);
 digitalWrite(24,HIGH);
 digitalWrite(25,LOW);
 digitalWrite(26,LOW);
 digitalWrite(27,HIGH);
 digitalWrite(28,HIGH);
 digitalWrite(29,LOW);
 analogWrite(2,x);
 analogWrite(3,x);
 analogWrite(4,x);
 analogWrite(5,x);
}
void car_backward(byte x)
{  

 digitalWrite(22,LOW);
 digitalWrite(23,HIGH);
 digitalWrite(24,LOW);
 digitalWrite(25,HIGH);
 digitalWrite(26,LOW);
 digitalWrite(27,HIGH);
 digitalWrite(28,LOW);
 digitalWrite(29,HIGH);
 analogWrite(2,x);
 analogWrite(3,x);
 analogWrite(4,x);
 analogWrite(5,x);
}
void car_forward(byte x,byte y)
{
 
 digitalWrite(22,HIGH);
 digitalWrite(23,LOW);
 digitalWrite(24,HIGH);
 digitalWrite(25,LOW);
 digitalWrite(26,HIGH);
 digitalWrite(27,LOW);
 digitalWrite(28,HIGH);
 digitalWrite(29,LOW);
 analogWrite(2,y);
 analogWrite(3,x);
 analogWrite(4,y);
 analogWrite(5,x);
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
/*void followLine()
{ 
  bool sensor_R , sensor_M , sensor_L ;
  sensor_R = digitalRead(r_sensor);
  sensor_M = digitalRead(m_sensor);
  sensor_L = digitalRead(l_sensor);
  delay(500);
   if( sensor_R == 0&& sensor_L == 0 && sensor_M == 0)
    car_forward();
   else if((sensor_R == 1 && sensor_L == 0 && sensor_M== 0) or(sensor_R == 1 && sensor_L == 0 && sensor_M == 1 ))
   car_left();
   else if( sensor_R == 1&& sensor_L == 1 && sensor_M == 0)
    car_forward();
   else if(sensor_R == 1&& sensor_M == 1 && sensor_L == 1)//ÚÔÇä áæ áÞí ËáÇËå ÇÓæÏ ÚäÏ ÇáÊÞÇØÚ íßãá ÞÏÇã
    car_stop();
   else if ((sensor_R ==0 && sensor_L ==1 && sensor_M == 0 )  or (sensor_R == 0 && sensor_L ==1 && sensor_M ==1))
   car_right (); 
  }*/

  
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
pinMode(43,OUTPUT);
pinMode(49,OUTPUT);
pinMode(45,INPUT);
pinMode(47,INPUT);
digitalWrite(43,LOW);
digitalWrite(49,HIGH);

}

void loop()
{


if(Serial.available()>0)
{
input=Serial.read();
}
if(input=='B')//turn on and off switch
{
  mode=input;
}
else if(input=='b')
{
    mode=input;
      car_stop();

}
else if(input=='l')
{
   circle();
   input=0;
}
/*else if (input='n') 
{
  infinite();
}*/
 else if(input=='y')
 {
   rectangle();
      input=0;

 }
 else if(input=='f')
 {
  rectangle();
  delay(2500);
  circle();
  delay(2500);
  infinite();
     input=0;

 }
else if(input=='m')
{
    int q= Serial.parseInt();
    q*=16.4;
    car_forward(100,200);
    delay(q);
    car_stop();
       input=0;

    
}
else if(input=='h')
{
 
    int v= Serial.parseInt();
    v*=3.88;
    car_left(150);
    delay(v);
    car_stop();
       input=0;

    
}
else if(input=='z')
{
    mode=input;
}

while (mode=='z')
{
   bool sensor_R , sensor_M , sensor_L ;
  sensor_R = digitalRead(r_sensor);
  sensor_M = digitalRead(m_sensor);
  sensor_L = digitalRead(l_sensor);
   if( sensor_R == 0&& sensor_L == 0 && sensor_M == 0)
    car_forward(120,120);
   else if((sensor_R == 1 && sensor_L == 0 && sensor_M== 0) or(sensor_R == 1 && sensor_L == 0 && sensor_M == 1 ))
   car_left  (150);
   else if( sensor_R == 1&& sensor_L == 1 && sensor_M == 0)
    car_forward(90,90);
   else if ((sensor_R ==0 && sensor_L ==1 && sensor_M == 0 )  or (sensor_R == 0 && sensor_L ==1 && sensor_M ==1))
   car_right (150);
   if(Serial.available()>0)
   {
   input=Serial.read();
   if(input=='b')
   {
   mode=input; 
   car_stop();
   }
   }
   
}


 if(mode=='B')
{
 p=analogRead(15);
 if(p>50)
 {
  car_backward(150);
  delay(30);
  car_stop();
 }
 else
 {
if(input=='x')
{
  car_stop();

}
if(input=='w')
{
  car_forward(150,150);

}
if(input=='s')
{
  car_backward(150);

}
if(input=='d')
{
  car_right(150);

}
if(input=='a')
{
  car_left(150);
   


  }
 }
}
}


