// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1000);
  digitalWrite(9, LOW);
  delay(1000);

  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(1000);

}
