#include <dht.h>
#include <LiquidCrystal.h>
#define PINNO 2

LiquidCrystal lcd( 4, 6, 10, 11, 12, 13 );
dht DHT;

#define DHT11_PIN 7



void setup(){
  lcd.begin( 16, 2 );
  pinMode(2,OUTPUT);
}

void loop(){
  int chk = DHT.read11(DHT11_PIN);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp = ");
  lcd.print(DHT.temperature);
  lcd.print("C");
  lcd.setCursor(0,1);
  lcd.print("Hum  = ");
  lcd.print(DHT.humidity);
  lcd.print("%");

  if(DHT.temperature >= 30){
    if(DHT.humidity >= 70){
      bad();
    }
    else{
      middle();
    }
  }
  else{
    if(DHT.humidity >= 70){
      middle();
    }
    else{
      good();
    }
  }
  delay(2000);
}

void good(){
  tone(PINNO,330,100);
  delay(500);
  tone(PINNO,392,100);
  delay(500);
  tone(PINNO,523,500);
  delay(800);
  tone(PINNO,392,100);
  delay(500);
  tone(PINNO,440,100);
  delay(500);
  tone(PINNO,392,500);
  delay(1200);
  tone(PINNO,262,200);
  delay(300);
  tone(PINNO,330,100);
  delay(400);
  tone(PINNO,392,100);
  delay(300);
  tone(PINNO,523,200);
  delay(500);
  tone(PINNO,494,100);
  delay(300);
  tone(PINNO,440,100);
  delay(300);
  tone(PINNO,392,800);
  delay(2000);
    tone(PINNO,440,300);
  delay(600);
  tone(PINNO,440,100);
  delay(300);
  tone(PINNO,440,300);
  delay(600);
  tone(PINNO,523,300);
  delay(300);
  tone(PINNO,494,100);
  delay(300);
  tone(PINNO,440,100);
  delay(300);
  tone(PINNO,392,800);
  delay(2000);
  tone(PINNO,440,300);
  delay(300);
  tone(PINNO,392,200);
  delay(200);
  tone(PINNO,440,300);
  delay(300);
  tone(PINNO,392,200);
  delay(200);
  tone(PINNO,294,500);
  delay(500);
  tone(PINNO,330,500);
  delay(500);
  tone(PINNO,262,800);
  delay(10000);
}
void bad(){
  tone(PINNO,494,500);
  delay(500);
  tone(PINNO,392,500);
  delay(500);
  tone(PINNO,494,500);
  delay(500);
  tone(PINNO,392,500);
  delay(500);
  tone(PINNO,494,500);
  delay(500);
  tone(PINNO,392,500);
  delay(500);
  tone(PINNO,494,500);
  delay(500);
  tone(PINNO,392,300);

  delay(10000);
}
void middle(){
    tone(PINNO,330,800);
  delay(800);
  tone(PINNO,392,500);
  delay(500);
  tone(PINNO,587,1000);
  delay(1200);
  tone(PINNO,523,800);
  delay(800);
  tone(PINNO,392,500);
  delay(500);
  tone(PINNO,349,1000);
  delay(1200);
  tone(PINNO,330,800);
  delay(800);
  tone(PINNO,330,600);
  delay(600);
  tone(PINNO,330,400);
  delay(400);
  tone(PINNO,349,400);
  delay(400);
  tone(PINNO,392,400);
  delay(400);
  tone(PINNO,440,1200);
  delay(1200);
  tone(PINNO,392,1200);
  delay(1500);
    tone(PINNO,330,800);
  delay(800);
  tone(PINNO,392,500);
  delay(500);
  tone(PINNO,587,1000);
  delay(1200);
  tone(PINNO,523,800);
  delay(800);
  tone(PINNO,392,500);
  delay(500);
  tone(PINNO,349,1000);
  delay(1200);
  tone(PINNO,330,800);
  delay(800);
  tone(PINNO,392,600);
  delay(600);
  tone(PINNO,392,400);
  delay(400);
  tone(PINNO,440,400);
  delay(400);
  tone(PINNO,494,400);
  delay(400);
  tone(PINNO,523,1200);
  delay(1200);
  tone(PINNO,523,1200);
  delay(10000);
}
