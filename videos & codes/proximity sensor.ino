int x=0;
void setup() {
  Serial.begin(9600);
}

void loop()
{
  x=analogRead(A1);
  Serial.write("the output is :");
  Serial.println(x); 
  if(x<500)
  Serial.write("(far)");
  else
  Serial.write("(close)");
  Serial.write('\n');
  delay(1000);
}
