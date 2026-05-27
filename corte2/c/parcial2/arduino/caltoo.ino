#include <Arduino.h>

const int pinpote=A0;
const int ADC_MAX = 1023;
const float VREF = 5.0;

int leerADC(int pin){
  int valor = analogRead(pin);
  return valor;
}

float calcularVoltage(int valorADC){
  float voltaje = (valorADC * VREF) / ADC_MAX;
  return voltaje;
}

int calcularPorcentaje(int valorADC){
  int porcentaje = (int)(long)valorADC * 100L / ADC_MAX;
  return porcentaje;
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
  int valorADC = leerADC(pinpote);
  float voltaje = calcularVoltage(valorADC);
  int porcentaje = calcularPorcentaje(valorADC);
  mostrarDatos(valorADC, voltaje, porcentaje);
  delay(500);
}
