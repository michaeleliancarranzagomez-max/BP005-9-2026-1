const int michled = 2; 
void setup() {
  pinMode(michled, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int contador = 1;
  do{
    digitalWrite(michled, HIGH);
    delay(200);
    digitalWrite(michled, LOW);
    delay(200);
    contador++;
  }
  // put your main code here, to run repeatedly:
  while(contador <= 4);
  delay(1200);
}
