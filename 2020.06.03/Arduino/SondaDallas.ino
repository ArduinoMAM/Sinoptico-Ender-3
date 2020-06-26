#include <OneWire.h>
#include <DallasTemperature.h>

#define DATO 6

OneWire ourWire (DATO);
DallasTemperature sensors (&ourWire);

//int led = 6;
int boton = 3;
int ventilador = 5;
float temperatura;
bool ventilador_activado = false;
int temperatura_limite = 29;

void setup (){
  Serial.begin (9600);
  delay (1500);
  sensors.begin ();
  pinMode (ventilador,OUTPUT);
}

void loop (){
  sensors.requestTemperatures ();
//  Serial.print (sensors.getTempCByIndex (0));
  temperatura = sensors.getTempCByIndex(0);
//  Serial.println (" Grados Centigrados");
  delay (1000);


  if (temperatura > temperatura_limite){
    digitalWrite(ventilador,LOW);
    ventilador_activado = true;
    Serial.println(temperatura);
//    Serial.println("VENTILADOR ACTIVADO -> " + String (temperatura));
  }else{
    digitalWrite(ventilador,HIGH);
    ventilador_activado = false;
        Serial.println(temperatura);
//     Serial.println("VENTILADOR DESACTIVADO -> " +  String (temperatura));
  }
}




  
//#include <OneWire.h>
//#include <DallasTemperature.h>
//
//#define DATO 6
//
//OneWire ourWire (DATO);
//DallasTemperature sensors (&ourWire);
//
//void setup (){
//  Serial.begin (9600);
//  Serial.println ("---------- REALIZADO POR ----------");
//  Serial.println ("------ HTTPS://iTechWare.COM ------");
//  Serial.println ("-- VISITALO PARA MAS INFORMACION --");
//  delay (1500);
//  sensors.begin ();
//}
//
//void loop (){
//  sensors.requestTemperatures ();
//  Serial.print (sensors.getTempCByIndex (0));
//  Serial.println (" Grados Centigrados");
//////////////////////////////////////////////////
////Recomiendo ver el tutorial para que veas como usar este codigo.
//////////////////////////////////////////////////
//  delay (1000);
//}



////CODIGO
////se incluyen las librerias
//#include <OneWire.h>
//#include <DallasTemperature.h>
//
////se define el pin que vamos a usar con one wire
//#define ONE_WIRE_BUS 2
//OneWire oneWire(ONE_WIRE_BUS);
//DallasTemperature sensor (&oneWire);
//
//int led = 6;
//int boton = 3;
//int ventilador = 5;
//float temperatura;
//bool ventilador_activado = false;
//int temperatura_limite = 29;
//
//
//void setup() {
//
//  //TCCR0B = TCCR0B & B11111000 | B00000101;    // for PWM frequency of 30.64 Hz
//  Serial.begin(9600);
//  Serial.println("Iniciando Sistema Control Temperatura");
//  pinMode (ventilador,OUTPUT);
//
//}
//
//void loop() {
//
//  sensor.requestTemperatures();
//  temperatura = sensor.getTempCByIndex(0);
//  //Serial.println("La temperatura es: " + String(temperatura));
//
//  if (temperatura > temperatura_limite){
//    digitalWrite(ventilador,HIGH);
//    ventilador_activado = true;
//    Serial.println("VENTILADOR ACTIVADO -> " + String (temperatura));
//  }else{
//    digitalWrite(ventilador,LOW);
//    ventilador_activado = false;
//    Serial.println("VENTILADOR DESACTIVADO -> " +  String (temperatura));
//  }
//
//}