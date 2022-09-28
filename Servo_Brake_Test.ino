#include <Servo.h>

Servo myservo;

#define SERVO_PIN 9

void setup() {
    myservo.attach(SERVO_PIN);
}

int pos = 100;
int increment = 1;
void loop() {
    pos += increment;
    //lower number is moving toward the wheel 
    if(pos >= 120 || pos <= 85){
      increment *= -1;
      delay(2000);
    }
    myservo.write(pos);
    Serial.println(pos);
    delay(50);
}
