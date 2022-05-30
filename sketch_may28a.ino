int sensorPin = A0;
int esikDegeri = 100;
int buzzerPin = 8;
int veri;
#define led 3
#define pot A1;
#include <LiquidCrystal.h>

LiquidCrystal lcd(13,12, 11, 5, 4, 2);


void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(led, OUTPUT);
  lcd.begin(16, 2);
}
void loop() {
  veri = analogRead(sensorPin);
  if(veri > esikDegeri){
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{
    digitalWrite(buzzerPin, HIGH);
    lcd.print("Su Yok");
    delay(400);
    digitalWrite(buzzerPin, LOW);
    lcd.clear();
    delay(400);
    
  }
}

