void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(5, HIGH);
  delay(5000);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(3000);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(5000);
  digitalWrite(7, LOW);

  int button = digitalRead(2);
  if(button == LOW) {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(5000);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  }
  
    
}
