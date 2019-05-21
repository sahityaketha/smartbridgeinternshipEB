const int ledpin=16;
const int freq=5000;
const int ledchannel=0;
const int resolution=8;
void setup(){
  ledcSetup(ledChannel,freq,resolution);
  ledcAttachPin(ledPin,ledChannel);
  // put your setup code here, to run once:

}

void loop() {
  for(int dutyCycle=0;dutyCycle<=255;dutyCycle++){
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }
  for(int dutyCycle=255;dutyCycle>=0;dutyCycle--){
    ledcWrite(ledChannel,dutyCycle);
    delay(15);
  }
  // put your main code here, to run repeatedly:

}
