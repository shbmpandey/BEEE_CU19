int i;
void setup() {
  // put your setup code here, to run once:
for(i=10;i<=13;i++){
  pinMode(i,OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=10;i<14;i++){
    allLEDsoff();
    if (i!=13){
      digitalWrite(i,HIGH);
      digitalWrite(i+1,HIGH);
      delay(200);
    }
    else
    digitalWrite(i,HIGH);
    digitalWrite(i-3,HIGH);
    delay(200);
    allLEDsoff();
  }
}
void allLEDsoff(void)
{for(int i=10;i<=14;i++){
  digitalWrite(i,LOW);
}
delay(100);
}
