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
  
  digitalWrite(rojo,HIGH);
  delay(500); 
  digitalWrite(rojo,LOW);
  delay(1000); 
  digitalWrite(naranja,HIGH);
  delay(500); 
  digitalWrite(naranja,LOW);
  delay(1000); 
  digitalWrite(verde,HIGH);
  delay(500); 
  digitalWrite(verde,LOW);
  delay(1000); 
}
