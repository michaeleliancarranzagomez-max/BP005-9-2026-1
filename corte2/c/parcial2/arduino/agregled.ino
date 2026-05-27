#include <Arduino.h>

const int pinpote=A0;
const int michled = 9;
const int ADC_MAX = 1023;
const float VREF = 5.0;
const int UMBRAL_led= 5.0;

void leerpotenciometro(int pin,int *valorADC, float *voltaje, int *porcentaje){
  if(valorADC == NULL||voltaje == NULL||porcentaje == NULL){
    return;
  }
  *valorADC = analogRead(pin);
  *voltaje = (*valorADC * VREF) / ADC_MAX;
  *porcentaje = (int)(((long)*valorADC * 100L) / ADC_MAX);
}

void deciestled(int porcentaje, int umbral, int *estadoLED){
  if(estadoLED == NULL){
    return;
  }
  if(porcentaje >= umbral){
    *estadoLED = HIGH;
  } else {
    *estadoLED = LOW;
  }
}

void mostrarDatos(int valorADC, float voltaje, int porcentaje, int estadoLED){
  Serial.print("ADC = ");
  Serial.print(valorADC);

  Serial.print(" | Voltaje = ");
  Serial.print(voltaje, 2);
  Serial.print(" V");

  Serial.print("  | Porcentaje = ");
  Serial.print(porcentaje);
  Serial.println(" %");

  Serial.print(" | LED =");
  if(estadoLED == HIGH){
    Serial.println(" Encendido");
  } else {
    Serial.println(" Apagado");
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(michled, OUTPUT);
}

void loop() {
  int valorADC = 0;
   float voltaje = 0.0;
   int porcentaje = 0;
   int estadoLED = LOW;
  leerpotenciometro(pinpote, &valorADC, &voltaje, &porcentaje);
  deciestled(porcentaje, UMBRAL_led, &estadoLED);
  digitalWrite(michled, estadoLED);
  mostrarDatos(valorADC, voltaje, porcentaje, estadoLED);
  delay(500);
}
