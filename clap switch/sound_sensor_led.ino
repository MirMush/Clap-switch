int led=8;
boolean ledstatus=false;
int soundpin=7;

void setup() {
 pinMode(led,OUTPUT);
 pinMode(soundpin,INPUT);
 Serial.begin(9600);
}

void loop() {
  int soundstatus= digitalRead(soundpin);
  Serial.println(soundstatus);
  delay(1000);
  if( soundstatus == 1){
      if(ledstatus==false){
        ledstatus=true;
        digitalWrite(led,HIGH);
      }
    else if(ledstatus==true){
      ledstatus==false;
      digitalWrite(led,LOW);
    }
 
  }
 
}
