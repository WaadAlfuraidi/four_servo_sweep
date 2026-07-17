#include <Servo.h>

// إنشاء أربعة محركات Servo
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// المنافذ المتصلة بالمحركات
const int servo1Pin = 3;
const int servo2Pin = 5;
const int servo3Pin = 6;
const int servo4Pin = 9;

// دالة تحرك جميع المحركات إلى الزاوية نفسها
void moveAllServos(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}

void setup() {
  // ربط كل محرك بالمنفذ الخاص به
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  servo3.attach(servo3Pin);
  servo4.attach(servo4Pin);

  int angle = 0;
  int direction = 1;

  // حفظ وقت بداية حركة Sweep
  unsigned long startTime = millis();

  // تحريك المحركات يمينًا ويسارًا لمدة ثانيتين فقط
  while (millis() - startTime < 2000) {
    moveAllServos(angle);

    angle = angle + (direction * 3);

    // عند الوصول إلى 180 درجة نعكس الاتجاه
    if (angle >= 180) {
      angle = 180;
      direction = -1;
    }

    // عند الوصول إلى 0 درجة نعكس الاتجاه
    if (angle <= 0) {
      angle = 0;
      direction = 1;
    }

    delay(15);
  }

  // بعد انتهاء الثانيتين تثبت جميع المحركات عند 90 درجة
  moveAllServos(90);
}

void loop() {
  // فارغة حتى لا تتكرر الحركة مرة أخرى
}