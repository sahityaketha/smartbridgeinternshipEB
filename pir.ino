void setup() {
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  pinMode(5,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int a=digitalRead(5);
  if(a==HIGH)
  {
    Serial.println("Person Detected");
    digitalWrite(2,HIGH);
  }
  else
  {
   Serial.println("Person not Detected");
   digitalWrite(2,LOW); 
  }
  // put your main code here, to run repeatedly:

}
