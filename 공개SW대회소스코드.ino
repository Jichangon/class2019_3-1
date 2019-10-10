#include <Servo.h>
#include<SoftwareSerial.h>

Servo myservo;
SoftwareSerial bluetooth(2,3);

void setup() {
 myservo.attach(9);
 Serial.begin(9600);
 bluetooth.begin(9600);


}

void loop() {
  

  if(bluetooth.available())
  {
    char data = bluetooth.read();
 //   Serial.write(data);
    Serial.println(data);

    if(data=='a'){
      myservo.write(45);
    }
    if(data=='b')
    {
      myservo.write(90);
    }
    if(data=='c')
    {
      myservo.write(135);
      
    }
    if(data=='d')
    {
      myservo.write(180);
    }
  }
  

}
