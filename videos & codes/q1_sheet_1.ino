void setup() {
pinMode(2,OUTPUT);

}

void loop()
{
  digitalWrite(4,HIGH);
  delay(1000);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(1000);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(1000);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(5,LOW);
}
