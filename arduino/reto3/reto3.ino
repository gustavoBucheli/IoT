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
 
  for (int i=0; i<5 ;i++){ 
    digitalWrite(rojo,HIGH);
    digitalWrite(verde,HIGH);
    delay(100); 
    digitalWrite(rojo,LOW);
    digitalWrite(verde,LOW);
    delay(1000); 
  }
  for (int j=0; j<5 ;j++){
    digitalWrite(naranja,HIGH);
    delay(100); 
    digitalWrite(naranja,LOW);
    delay(1000);
  }
}
