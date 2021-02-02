#define LED_PCB 13

int cmd=0;
void setup() {
   pinMode(LED_PCB, OUTPUT);
   Serial.begin(9600);
}

void loop() {
   if (Serial.available() > 0)
  {
    cmd=Serial.read();
    if(cmd==48){
      digitalWrite(LED_PCB, LOW);
    }
    
    if(cmd==49){
      digitalWrite(LED_PCB, HIGH);
    }
  }
}
