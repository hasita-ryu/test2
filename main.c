#include <SchooMyUtilities.h>
#include <Servo.h>
SchooMyUtilities scmUtils = SchooMyUtilities();

Servo myServo;

void setup() {
  Serial.begin(9600);
  pinMode(A5, INPUT);
  pinMode(15, INPUT);
  myServo.attach(9); // 右下ポートのfirstピン
  myServo.write(0);
}

void loop() {
  int alcoholVal = analogRead(A5);
  Serial.println(alcoholVal);

  if ((!digitalRead(15) == 1) || (alcoholVal > 300)) {
    // ビビッ警告音
    tone(5, SchooMyUtilities::F_E3, 100);
    delay(150);
    noTone(5);
    tone(5, SchooMyUtilities::F_E3, 100);
    delay(150);
    noTone(5);

    // サーボでビンタ
    myServo.write(90);
    delay(500);
    myServo.write(0);
    delay(500);
  }
}