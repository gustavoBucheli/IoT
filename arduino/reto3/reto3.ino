int led_verd=13;
int led_amar=11;
int led_rojo=10;
void setup() {
  // put your setup code here, to run once:
  pinMode(led_verd,OUTPUT);
  pinMode(led_amar,OUTPUT);
  pinMode(led_rojo,OUTPUT);
}

void loop() {
 
  for (int i=0; i<5 ;i++){ 
    digitalWrite(led_rojo,HIGH);
    digitalWrite(led_verd,HIGH);
    delay(100); //1000=1 SEG
    digitalWrite(led_rojo,LOW);
    digitalWrite(led_verd,LOW);
    delay(1000); 
  }
  for (int j=0; j<5 ;j++){
    digitalWrite(led_amar,HIGH);
    delay(100); 
    digitalWrite(led_amar,LOW);
    delay(1000);
  }
}
