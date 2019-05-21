#include <Servo.h>
const int trigPin=4;
const int echoPin=5;
long duration;
int distance;

Servo myservo;
int pos=0;
void setup()
{
  myservo.attach(13);
  pinMode(2,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);

}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
  if  (distance==5)
  {
  for(pos=0;pos<=180;pos+=1)
  {
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
  }
  delay(2000);
  for(pos=180;pos>=0;pos-=1)
  {
    myservo.write(pos);
    if(pos==90)
    delay(200);
    delay(15);
  }
  }

}
