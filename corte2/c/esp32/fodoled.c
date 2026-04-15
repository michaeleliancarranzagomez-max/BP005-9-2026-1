const int led1 = 2;
const int led2 = 4;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i; i <= 4; i++){
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(3000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
}
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
delay(1000);
}
