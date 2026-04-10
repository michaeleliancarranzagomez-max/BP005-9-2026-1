const int michled = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(michled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int contador = 1;
   while(contador <= 5){
    digitalWrite(michled, HIGH);
    delay(250);
    digitalWrite(michled, LOW);
    delay(250);
   }
delay(1500);
}
