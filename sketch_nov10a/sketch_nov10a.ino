void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  // put your setup code here, to run once:

}
boolean y = LOW;
void loop() {
  boolean x = digitalRead(2);
  if(x == HIGH) y = !y;
  do{
    digitalWrite(13, !y);
  }while(x == LOW);
  // put your main code here, to run repeatedly:

}
