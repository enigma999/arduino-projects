const int KNOPPEN=2;
const int LEDS=5;
const int KNOP[KNOPPEN]={2,3};
const int LED[LEDS]={4,5,6,7,8};
int buttonPressed;
int cursor=0;
void setup() {
  // put your setup code here, to run once:
 startKnoppen(KNOPPEN,KNOP);
 startLEDs(LEDS,LED);
}

void loop() {
  // put your main code here, to run repeatedly:
  // testLEDs(LEDS,LED);
  // testKnoppen(KNOPPEN,KNOP,LED[0]);
  buttonPressed = readAnyButtonPress(KNOPPEN,KNOP);
  if(buttonPressed>0){
    moveCursor(buttonPressed);
    while(!readButtonRelease(KNOP[buttonPressed-1])){
      
    }
  }
}

void startKnoppen(int KNOPPEN,int KNOP[]){
    for(int i=0;i<KNOPPEN;i++){
      pinMode(KNOP[i],INPUT);
    }
}

void startLEDs(int LEDS,int LED[]){
    for(int i=0;i<LEDS;i++){
      pinMode(LED[i],INPUT);
    }
}

void testLEDs(int LEDS,int LED[]){
    for(int i=0;i<LEDS;i++){
      digitalWrite(LED[i],HIGH);
      delay(1000);
      digitalWrite(LED[i],LOW);
    }  
}

void testKnoppen(int KNOPPEN,int KNOP[],int LED){
      int pressed;
      for(int i=0;i<KNOPPEN;i++){
      pressed = digitalRead(KNOP[i]);
      digitalWrite(LED,pressed);
    }  
}

int readAnyButtonPress(int KNOPPEN,int KNOP[]){
  int buttonPressed =0;
  for(int i=0;i<KNOPPEN;i++){
    if(digitalRead(KNOP[i])==HIGH){
      buttonPressed=i+1;
    }
  }
  return buttonPressed;
}

void moveCursor(int buttonPressed){
    switch
}

bool readButtonRelease(int button){
    bool released = digitalRead(button);
    return released;
}