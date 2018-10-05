int led=7;
int push=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(push,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  if(digitalRead(push)==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
   digitalWrite(led,LOW);
  }
}
