#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int standby = 0;
const int motion = 1;
const int bell = 6;

int ButtonPin = A0;
int Buzzer1 = 7;
int MotionSensor = 8;
int state = standby; 



void setup() {
  Serial.begin(9600);
  
  pinMode(ButtonPin, INPUT);
  pinMode(Buzzer1, OUTPUT);
  pinMode(MotionSensor, INPUT);
 
  
}

void loop() {
  
  switch(state) {
    case standby:
    Standby();      
    break;
    
    case motion:
    Motion();       
    break;
    
    case bell:
    Bell();         
    break;
  }
  Standby();
  Motion();
  Bell();
}
  
//Now comes definition
void Standby(){
  if(digitalRead(8)==LOW && digitalRead(ButtonPin)==LOW){
    lcd.print("Standby");
  }
}
void Motion() {
      
    if (digitalRead(8) == HIGH) {
    lcd.print("Motion Detected");
  }
}
void Bell() {      
  
  lcd.setCursor(0, 1);
  if (digitalRead(ButtonPin) == HIGH) {
    lcd.print("You've A Visitor");
    tone(Buzzer1, 220, 100);
    delay (200);
    tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,450,225);
      delay(300);
      tone(Buzzer1,450,225);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,450,200);
      delay(300);
      tone(Buzzer1,600,300);
      delay(300);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,700,300);
      delay(300);
      tone(Buzzer1,700,300);
      delay(500);
      tone(Buzzer1,600,300);
      delay(300);
      tone(Buzzer1,400,200);
      delay(1000);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,650,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,650,200);
      delay(300);
      tone(Buzzer1,650,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(1000);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,600,300);
      delay(500);
      tone(Buzzer1,600,300);
      delay(500);
      tone(Buzzer1,800,300);
      delay(500);
      tone(Buzzer1,800,300);
      delay(500);
      tone(Buzzer1,400,200);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,400,200);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      delay(500);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);
      tone(Buzzer1,300,150);
    }
}
