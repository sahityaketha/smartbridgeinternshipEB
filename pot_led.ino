const int BUTTON=5;
const int LED=4;
int BUTTONstate=0;
void setup() {
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  BUTTONstate=analogRead(BUTTON);
  if(BUTTONstate==HIGH)
  {
    Serial.println("High");
    digitalWrite(LED,HIGH);
    delay(100);
    
  }
  else
  {
    Serial.println("Low");
    digitalWrite(LED,LOW);
    delay(100);
  }
  // put your main code here,to run repeatedly:
 
}
