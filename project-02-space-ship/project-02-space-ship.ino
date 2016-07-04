int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if(switchState == LOW) {
    digitalWrite(12, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else {
    digitalWrite(12, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
  }
}
