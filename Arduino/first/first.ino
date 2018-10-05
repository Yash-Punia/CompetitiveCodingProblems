int led = 7; //the built in led code

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT); //defining that we want an output from this led
  pinMode(LED_BUILTIN,OUTPUT); //LED_BUILTIN is the keyword for the 13 led
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<5;i++)
  {
    digitalWrite(led,HIGH);
    //digitalWrite(LED_BUILTIN,LOW);
    delay(500);
    digitalWrite(led,LOW);
    //digitalWrite(LED_BUILTIN,HIGH);
    delay(500);
  }
  for(int i=0;i<5;i++)
  {
    digitalWrite(LED_BUILTIN,HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN,LOW);
    delay(500);
  }
}
