#include <Arduino.h>

const int pinpote=A0;
 const int cantidadlec = 10;
 const int pausaentre = 20;

void lectura(int pin,int datos[], int cantidad,int pausa){
  if(datos == NULL||cantidad <= 0){
    return;
  }
 
  for(int i=0; i<cantidad; i++){
    datos[i] = analogRead(pin);
    delay(pausa);
  }
}

void analizar(int datos[], int cantidad, int *promedio,
int *minimo, int *maximo){
  if(datos == NULL||cantidad <= 0||promedio == NULL||minimo == NULL||maximo == NULL){
    return;
  }
  
  long suma = 0;
  *minimo = datos[0];
  *maximo = datos[0];
  
  for(int i=0; i<cantidad; i++){
    suma = suma+ datos[i];
    if(datos[i] < *minimo){
      *minimo = datos[i];
    }
    if(datos[i] > *maximo){
      *maximo = datos[i];
    }
  }
  
  *promedio = (int)(suma / cantidad);
}

void mostrarDatos(int datos[], int cantidad){
  if(datos == NULL||cantidad <= 0){
    return;
  }
  
  for(int i=0; i<cantidad; i++){
    Serial.print("Lectura ");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(datos[i]);
  }
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lecturas[cantidadlec];
  int promedio = 0;
  int minimo = 0;
  int maximo = 0;
  lectura(pinpote, lecturas, cantidadlec, pausaentre);
  analizar(lecturas, cantidadlec, &promedio, &minimo, &maximo);
  mostrarDatos(lecturas, cantidadlec);
  delay(500);
}
