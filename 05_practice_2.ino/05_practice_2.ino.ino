#define PIN7 7

void setup() {
  pinMode(PIN7, OUTPUT);
  int i;
  i=0;
  digitalWrite(PIN7,LOW);
  delay(1000);
  while(i<6){
    digitalWrite(PIN7, LOW);
    delay(200);
    digitalWrite(PIN7, HIGH);
    delay(200);
    i=i+1;
  }
  while(1){}
}
