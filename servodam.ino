#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


// Servo
#include <Servo.h>
Servo myservo; //Create servo object to control a servo


// #define servo_on 4
// #define servo_off 8


int pos = 0;  // varaible to store the servo position


void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object


  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  // pinMode(servo_off, OUTPUT);
  // pinMode(servo_on, OUTPUT);
}


void loop() {
  delay(1000);
  int value = analogRead(A0);
  lcd.setCursor(0, 0);
  lcd.print("Value :");
  lcd.print(value);
  lcd.print("   ");
  Serial.println(value);
  lcd.setCursor(0, 1);
  lcd.print("W Level :");




  if (value == 0) {
    lcd.print("Empty ");
  } else if (value > 1 && value < 350) {
    lcd.print("LOW   ");
    // digitalWrite(13, LOW);
    if (pos != 181){
      for (pos = 80; pos <= 180; pos += 1) {  // goes from 80 degrees to 180 degrees
        myservo.write(pos);
        delay(3);
      }
    }
    // digitalWrite (servo_off, HIGH);
    // digitalWrite (servo_on, LOW);
  } else if (value > 350 && value < 510) {
    lcd.print("Medium");
  } else if (value > 510){
    lcd.print("HIGH  ");
    // digitalWrite(13, HIGH);
    if (pos != 79){
      for (pos = 180; pos >= 80; pos -= 1) {  // goes from 180 degrees to 80 degrees
        myservo.write(pos);
      
        delay(3);                                
      }
    }
    // digitalWrite (servo_on, HIGH);
    // digitalWrite (servo_off, LOW);
  }
}
