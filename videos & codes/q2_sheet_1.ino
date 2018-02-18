int x=0;
void setup() {
  Serial.begin(9600);
}

void loop()
{
  x=analogRead(A0);
  Serial.write("the output is :");
  Serial.println(x); 
  Serial.write('\n');
  delay(1000);
}
