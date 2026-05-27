#include <Arduino.h>

const int pinpote=A0;
const int ADC_MAX = 1023;
const float VREF = 5.0;

void leerpotenciometro(int pin,int *valorADC, float *voltaje, int *porcentaje){
  if(valorADC == NULL||voltaje == NULL||porcentaje == NULL){
    return;
  }
  *valorADC = analogRead(pin);
  *voltaje = (*valorADC * VREF) / ADC_MAX;
  *porcentaje = (int)(long)(*valorADC) * 100L /
}

void mostrarDatos(int valorADC, float voltaje, int porcentaje){
  Serial.print("ADC = ");
  Serial.print(valorADC);

  Serial.print(" | Voltaje = ");
  Serial.print(voltaje, 2);
  Serial.print(" V");

  Serial.print("  | Porcentaje = ");
  Serial.print(porcentaje);
  Serial.println(" %");
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorADC = 0;
   float voltaje = 0.0;
   int porcentaje = 0;
  leerpotenciometro(pinpote, &valorADC, &voltaje, &porcentaje);
  mostrarDatos(valorADC, voltaje, porcentaje);
  delay(500);
}
