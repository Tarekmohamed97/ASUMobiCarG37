//by asu G37
bool bit0=0;
bool bit1=0;
bool bit2=0;
bool bit3=0;
bool bit4=0;
bool bit5=0;
bool bit6=0;
bool bit7=0;
int duration=0; 
bool button=0;

void setup()
{
  pinMode(31,OUTPUT);
}

void loop()
{
  button=digitalRead(30);
  if(button==1)
{
  duration=0;
  bit0=digitalRead(22);
  bit1=digitalRead(23);
  bit2=digitalRead(24);
  bit3=digitalRead(25);
  bit4=digitalRead(26);
  bit5=digitalRead(27);
  bit6=digitalRead(28);
  bit7=digitalRead(29);
  duration+=bit0;
  duration+=(bit1*2);
  duration+=(bit2*4);
  duration+=(bit3*8);
  duration+=(bit4*16);
  duration+=(bit5*32);
  duration+=(bit6*64);
  duration+=(bit7*128);
  duration*=4;  
  digitalWrite(31,HIGH);
  delay(duration);
  digitalWrite(31,LOW);
  button=0;
  delay (200);
}

}
