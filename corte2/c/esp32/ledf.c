const int michled = 2;
void setup() {
  pinMode(michled, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  for(int i = 1;i <= 5; i++){
    digitalWrite(michled, HIGH);
    delay(300);
    digitalWrite(michled, LOW);
    delay(10);
  }
  // put your main code here, to run repeatedly:
delay(1500);
}
