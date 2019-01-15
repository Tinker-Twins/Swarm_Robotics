#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2,3); // RX,TX

void setup() {
pinMode(4, OUTPUT);    // RIGHT MOTOR 1
pinMode(5, OUTPUT);    // RIGHT MOTOR 2
pinMode(6, OUTPUT);    // LEFT MOTOR 1
pinMode(7, OUTPUT);    // LEFT MOTOR 2 
Serial.begin(9600);
BTSerial.begin(38400);
}

void loop() {

BTSerial.println("f");
digitalWrite (4, HIGH);         // FORWARD
digitalWrite (6, HIGH);
digitalWrite (5, LOW);
digitalWrite (7, LOW);
delay (5000);


BTSerial.println("b");
digitalWrite (4, LOW);          // BACKWARD
digitalWrite (6, LOW);
digitalWrite (5, HIGH);
digitalWrite (7, HIGH);
delay (5000);

BTSerial.println("l");
digitalWrite (4, HIGH);         // RADIAL LEFT
digitalWrite (6, LOW);
digitalWrite (5, LOW);
digitalWrite (7, LOW);
delay (5000);

BTSerial.println("r");
digitalWrite (4, LOW);          // RADIAL RIGHT
digitalWrite (6, HIGH);
digitalWrite (5, LOW);
digitalWrite (7, LOW);
delay (5000);

BTSerial.println("L");
digitalWrite (4, HIGH);         // AXIAL LEFT
digitalWrite (6, LOW);
digitalWrite (5, LOW);
digitalWrite (7, HIGH);
delay (5000);

BTSerial.println("R");
digitalWrite (4, LOW);          // AXIAL RIGHT
digitalWrite (6, HIGH);
digitalWrite (5, HIGH);
digitalWrite (7, LOW);
delay (5000);
}
