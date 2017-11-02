// Alvaro Bazante
#include <Servo.h>
#include <PololuMaestro.h>
#ifdef SERIAL_PORT_HARDWARE_OPEN
#define maestroSerial SERIAL_PORT_HARDWARE_OPEN
#else
#include <SoftwareSerial.h>
SoftwareSerial maestroSerial(10, 11);
#endif

MicroMaestro maestro0(maestroSerial);
MicroMaestro maestro1(maestroSerial);
MicroMaestro maestro2(maestroSerial);
MicroMaestro maestro3(maestroSerial);
MicroMaestro maestro4(maestroSerial);

//string que contendrá todos los comandos recibidos de unity
char myCol[20];

void setup(){
 
Serial.begin(9600);
maestroSerial.begin(9600);

}

void loop(){
  int lf = 10;
  maestro0.setSpeed(0, 0);
  maestro0.setAcceleration(0, 0);
  
//Servo_base
                // Giro hacia la izquierda 

                  Serial.readBytesUntil(lf, myCol, 1);
                  if(strcmp(myCol,"a")==0){
                   maestro0.setSpeed(0, 10);
                   maestro0.setAcceleration(0,127);
                   maestro0.setTarget(0, 8000);
                   //delay(500);
                   } 
                    
                // Centro
                  
                  Serial.readBytesUntil(lf, myCol, 1);   
                  if(strcmp(myCol,"b")==0){
                   maestro0.setSpeed(0, 10);
                   maestro0.setAcceleration(0,127);
                   maestro0.setTarget(0, 6000);
                   //delay(500);
                   }
                   
                // Giro hacia la derecha
                  Serial.readBytesUntil(lf, myCol, 1);
                  if(strcmp(myCol,"c")==0){
                   maestro0.setSpeed(0, 10);
                   maestro0.setAcceleration(0,127);
                   maestro0.setTarget(0, 4000);
                   //delay(500);
                   }

//Servo_brazo
                //Giro hacia arriba

                Serial.readBytesUntil(lf, myCol, 1);
                if(strcmp(myCol,"d")==0){
                 maestro1.setSpeed(1, 10);
                 maestro1.setAcceleration(1,127);
                 maestro1.setTarget(1, 8000);
                 //delay(500);
                 } 
                  
              // Centro 
                
                Serial.readBytesUntil(lf, myCol, 1);   
                if(strcmp(myCol,"e")==0){
                 maestro1.setSpeed(1, 10);
                 maestro1.setAcceleration(1,127);
                 maestro1.setTarget(1, 6000);
                 //delay(500);
                 }
                 
              // Giro hacia abajo
                Serial.readBytesUntil(lf, myCol, 1);
                if(strcmp(myCol,"f")==0){
                 maestro1.setSpeed(1, 10);
                 maestro1.setAcceleration(1,127);
                 maestro1.setTarget(1, 4000);
                 //delay(500);
                 }

//Servo_antebrazo
                //Giro hacia arriba

                Serial.readBytesUntil(lf, myCol, 1);
                if(strcmp(myCol,"g")==0){
                 maestro2.setSpeed(2, 10);
                 maestro2.setAcceleration(2,127);
                 maestro2.setTarget(2, 8000);
                 //delay(500);
                 } 
                  
              // Centro 
                
                Serial.readBytesUntil(lf, myCol, 1);   
                if(strcmp(myCol,"h")==0){
                 maestro2.setSpeed(2, 10);
                 maestro2.setAcceleration(2,127);
                 maestro2.setTarget(2, 6000);
                 //delay(500);
                 }
                 
              // Giro hacia abajo
                Serial.readBytesUntil(lf, myCol, 1);
                if(strcmp(myCol,"i")==0){
                 maestro2.setSpeed(2, 10);
                 maestro2.setAcceleration(2,127);
                 maestro2.setTarget(2, 4000);
                 //delay(500);
                 }

//Servo_mano
                //Giro hacia la izquierda

                Serial.readBytesUntil(lf, myCol, 1);
                if(strcmp(myCol,"j")==0){
                 maestro3.setSpeed(3, 10);
                 maestro3.setAcceleration(3,127);
                 maestro3.setTarget(3, 8000);
                 //delay(500);
                 } 
                  
              // Centro 
                
                Serial.readBytesUntil(lf, myCol, 1);   
                if(strcmp(myCol,"k")==0){
                 maestro3.setSpeed(3, 10);
                 maestro3.setAcceleration(3,127);
                 maestro3.setTarget(3, 6000);
                 //delay(500);
                 }
                 
              // Giro hacia derecha
                Serial.readBytesUntil(lf, myCol, 1);
                if(strcmp(myCol,"l")==0){
                 maestro3.setSpeed(3, 10);
                 maestro3.setAcceleration(3,127);
                 maestro3.setTarget(3, 4000);
                 //delay(500);
                 }
                 
//Servo_pinza
//                // Abrir
//
//                Serial.readBytesUntil(lf, myCol, 1);
//                if(strcmp(myCol,"m")==0){
//                 maestro4.setSpeed(4, 10);
//                 maestro4.setAcceleration(4,127);
//                 maestro4.setTarget(4, 4000);
//                 //delay(500);
//                 } 
//                  
//              // normal 
//                
//                Serial.readBytesUntil(lf, myCol, 1);   
//                if(strcmp(myCol,"n")==0){
//                 maestro4.setSpeed(4, 10);
//                 maestro4.setAcceleration(4,127);
//                 maestro4.setTarget(4, 6000);
//                 //delay(500);
//                 }
//                 
//              // Cerrar
//                Serial.readBytesUntil(lf, myCol, 1);
//                if(strcmp(myCol,"o")==0){
//                 maestro4.setSpeed(4, 10);
//                 maestro4.setAcceleration(4,127);
//                 maestro4.setTarget(4, 6000);
//                 //delay(500);
//                 }
}





