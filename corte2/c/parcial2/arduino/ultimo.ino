#include <Arduino.h>

const int pinpote=A0;
const int pinled=9;

 const int ADCmax = 1023;
 const int pwmmax = 255;
 const float Vref = 5.0;

 const int cantidadlec = 10;
 const int pausaentre = 20;
 const int pausacicl = 1000;
 const int umbral = 512;

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

void convertirprom(int promedio, float *voltaje, int *porcentaje, int *brillo){
  if(voltaje == NULL||brillo == NULL||porcentaje == NULL){
    return;
  }
  
  *voltaje = (promedio * Vref) / ADCmax;
  *porcentaje = (int)(long)((promedio * 100L) / ADCmax);
  *brillo = (int)(long)((promedio * pwmmax) / ADCmax);
}

void decidir(int porcentaje, int umbral, int *estado){
  if(estado == NULL){
    return;
  }
  if(porcentaje >= umbral){
    *estado = HIGH;
  } else {
    *estado = LOW;
  }
}

void aplicarexit(int pin, int brillo, int estado){
  if(estado == LOW){
    digitalWrite(pin, LOW);
  } else {
    analogWrite(pin, brillo);
  }
}

void mostrarDatos(int datos[], int cantidad){
  if(datos == NULL||cantidad <= 0){
    return;
  }
  Serial.println("Datos leidos:");
  for(int i=0; i<cantidad; i++){
    Serial.print(datos[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void mostrarResultados(int promedio, int minimo, int maximo, float voltaje, int porcentaje, int brillo, int estado){
  Serial.print("Promedio: ");
  Serial.println(promedio);

  Serial.print("Minimo: ");
  Serial.println(minimo);

  Serial.print("Maximo: ");
  Serial.println(maximo);

  Serial.print("Voltaje: ");
  Serial.print(voltaje, 2);
  Serial.println(" V");

  Serial.print("Porcentaje: ");
  Serial.print(porcentaje);
  Serial.println("%");

  Serial.print("Brillo: ");
  Serial.println(brillo);

  Serial.print("Estado del LED: ");
  if(estado == HIGH){
    Serial.println("Encendido");
  } else {
    Serial.println("Apagado");
  }
  Serial.println("------------------------------");
}
void setup() {
  Serial.begin(9600);
  pinMode(pinled, OUTPUT);
}

void loop() {
  int lecturas[cantidadlec];
  int promedio = 0;
  int minimo = 0;
  int maximo = 0;
  float voltaje = 0.0;
  int porcentaje = 0;
  int brillo = 0;
  int estado = LOW;

  lectura(pinpote, lecturas, cantidadlec, pausaentre);
  analizar(lecturas, cantidadlec, &promedio, &minimo, &maximo);
  convertirprom(promedio, &voltaje, &porcentaje, &brillo);
  decidir(porcentaje, umbral, &estado);
  aplicarexit(pinled, brillo, estado);
  mostrarDatos(lecturas, cantidadlec);
  mostrarResultados(promedio, minimo, maximo, voltaje, porcentaje, brillo, estado);
  
  delay(pausacicl);
}
