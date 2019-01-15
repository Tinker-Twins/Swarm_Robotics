void setup() {
pinMode(4,OUTPUT);    // RIGHT MOTOR 1
pinMode(5,OUTPUT);    // RIGHT MOTOR 2
pinMode(6,OUTPUT);    // LEFT MOTOR 1
pinMode(7,OUTPUT);    // LEFT MOTOR 2
pinMode(8,OUTPUT);    // +5V FOR MOTOR DRIVER
digitalWrite(8,HIGH);
Serial.begin(38400);
}

void loop() {
if(Serial.available()>0);{                                  // CHECK AVAILABILITY OF SERIAL COMMUNICATIN AND AVOID NULL [0] VALUES IF ANY
  
char x=Serial.read();                                       // DEFINE SERIAL READ CHARACTER

if(x=='f'){                  // FORWARD
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
}

if(x=='b'){                 // BACKWARD
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
}

if(x=='l'){                 // RADIAL LEFT
  digitalWrite (4,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (5,LOW);
  digitalWrite (7,LOW);
}

if(x=='r'){                // RADIAL RIGHT
  digitalWrite (4,LOW);
  digitalWrite (6,HIGH);
  digitalWrite (5,LOW);
  digitalWrite (7,LOW);
}

if(x=='L'){                 // AXIAL LEFT
  digitalWrite (4,HIGH);
  digitalWrite (6,LOW);
  digitalWrite (5,LOW);
  digitalWrite (7,HIGH);
}

if(x=='R'){                 // AXIAL RIGHT
  digitalWrite (4,LOW);
  digitalWrite (6,HIGH);
  digitalWrite (5,HIGH);
  digitalWrite (7,LOW);
}
}
}
