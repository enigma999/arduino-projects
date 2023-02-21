const int ARRAY_LENGHT=3;
const int LED_PINS[ARRAY_LENGHT] = {2,3,4};

void setup() {
  // put your setup code here, to run once:
  
  for(int i=0;i<ARRAY_LENGHT-1;i++){
    pinMode(LED_PINS[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  cycleLED(LED_PINS[0],LED_PINS[ARRAY_LENGHT-1]);

}

void cycleLED(int startPin,int endPin){
  
  for(int pin=startPin;pin<=endPin;pin++){
    knipperLED(pin);
  }
}

void knipperLED(int pin){
  digitalWrite(pin,HIGH);
  delay(50);
  digitalWrite(pin, LOW);
}