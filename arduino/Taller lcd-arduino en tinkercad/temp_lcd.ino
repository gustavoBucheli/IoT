//taller gustavo andres rosero bucheli
#include <LiquidCrystal.h>

// Variables para el sensor de temperatura
float temperatura = 0; // Almacena el valor calculado de la temperatura
int lecturaSensor = 0; // Almacena el valor crudo del sensor

int pinLED = 13; // Pin del LED
int pinMotor = 10; // Pin del motor

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(pinLED, OUTPUT);
  pinMode(pinMotor, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("Temperatura: ");

  Serial.begin(9600); // Velocidad en baudios
}

void loop() {
  lecturaSensor = analogRead(A0);
  temperatura = (lecturaSensor * (500.0 / 1024.0)) - 50.0;
  Serial.println(temperatura);

  lcd.setCursor(0, 1);
  lcd.print(temperatura);
  lcd.println(" ºC  ");

  if (temperatura <= 10) {
    digitalWrite(pinLED, HIGH);
    digitalWrite(pinMotor, HIGH);
    delay(500);
    digitalWrite(pinLED, LOW);
    delay(500);
    
  } else if (temperatura >= 11 && temperatura <= 25) {
    digitalWrite(pinLED, LOW);
    digitalWrite(pinMotor, LOW);
    delay(500);
    
  } else if (temperatura >= 26) {
    digitalWrite(pinLED, HIGH);
    digitalWrite(pinMotor, HIGH);
    delay(500);
  }
}

