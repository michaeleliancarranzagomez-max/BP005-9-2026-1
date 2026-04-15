const int led1 = 2;
const int led2 = 4;
const int led3 = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, LOW);
delay(250);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
delay(250);
digitalWrite(led1, LOW);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
delay(250);
}
