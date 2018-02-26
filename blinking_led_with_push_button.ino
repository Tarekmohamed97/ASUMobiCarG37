const int LEDPin = 13;
const int buttonpin = 2;
int val;
void setup() 
{
 pinMode(LEDPin,OUTPUT);
 pinMode(buttonpin,INPUT);// put your setup code here, to run once:

}

void loop() 
{
 val = digitalRead(buttonpin);
 if (val == HIGH )
 {
  digitalWrite(LEDPin,HIGH);
  delay(1000);
  digitalWrite(LEDPin,LOW);
  delay(1000);
  }// put your main code here, to run repeatedly:
else {
  digitalWrite(LEDPin,LOW);
  }
}
