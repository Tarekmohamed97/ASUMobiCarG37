
 volatile int t=1000;
void increase()
{
 if(t>=10000  )
  {
    t=10000;
  return 0;
  }
  t+=1000;
  
}
void decrease()
{
if (t<=1000)
   { t=1000;
    return 0;}
  t-=1000;
}
void setup() {
   attachInterrupt(digitalPinToInterrupt(2),increase,RISING);
   attachInterrupt(digitalPinToInterrupt(3),decrease,RISING);
   pinMode(24,OUTPUT);

}

void loop()
{
  
  digitalWrite(24,HIGH);
  delay(t);
  digitalWrite(24,LOW);
  delay(t);
  
}
