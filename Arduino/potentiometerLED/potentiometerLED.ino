int buzzer=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer,OUTPUT);
}

void loop() {
  for(int i=526;i>=0;i--)
  {
    analogWrite(buzzer,i);
    delay(50);
  }
  delay(5000);
  for(int i=0;i<526;i++)
  {
    analogWrite(buzzer,i);
    delay(50);
  }
  delay(5000);
}
