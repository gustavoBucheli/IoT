int verde=13;
int naranja=11;
int rojo=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(verde,OUTPUT);
  pinMode(naranja,OUTPUT);
  pinMode(rojo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(verde,HIGH);
  digitalWrite(naranja,HIGH);
  digitalWrite(rojo,HIGH);
  delay(1000); 
  digitalWrite(verde,LOW);
  digitalWrite(naranja,LOW);
  digitalWrite(rojo,LOW);
  delay(1000); 
}
