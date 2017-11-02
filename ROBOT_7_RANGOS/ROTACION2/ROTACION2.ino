// 
// UNIVERSIDAD DEL CAUCA - 2017

#include <Servo.h>
#include <SoftwareSerial.h>
SoftwareSerial ssc32u(15,14); // Rx Tx
// DeclaraciÃ³n del puerto serial para poder transimitir los comandos a la tarjeta ssc32u

//string que contendrÃ¡ todos los comandos recibidos de unity
char myCol[20];

void setup()
{
  // Se inicia en 9600 baudios los puertos seriales
  // puerto tx0 y rx0 que permiten la lectura de los datos que envia unity
  // Este puerto tx0 y rx0 son los que reciben la informacion del puerto serial 
  Serial.begin(9600);
  
  // puerto tx1 y rx1 que permiten trasnmitir los datos a la tarjeta ssc32u 
  ssc32u.begin(9600);
  
  // comando que permite limpiar comandos que esten almacenados en el boofer
  ssc32u.println("SSDEL 255");
}

void loop()
{
  int lf = 10;

  /////////////////////////////////////////////////BASE
  //DERECHA 
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"a")==0){
      ssc32u.println("#0 P500 S500");  
     }
  //DERECHA DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);   
    if(strcmp(myCol,"b")==0){
      ssc32u.println("#0 P850 S500");
     }
  //DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);   
    if(strcmp(myCol,"c")==0){
      ssc32u.println("#0 P1150 S500");
     }
  //CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"d")==0){
      Serial.println("#0 P1500 S500");
     }
  //IZQUIERDA CENTRO   
    Serial.readBytesUntil(lf, myCol, 1);   
    if(strcmp(myCol,"e")==0){
      ssc32u.println("#0 P1850 S500");
     }
  //IZQUIERDA IZQUIERDA CENTRO   
       Serial.readBytesUntil(lf, myCol, 1);   
    if(strcmp(myCol,"f")==0){
      ssc32u.println("#0 P2150 S500");
     }
  //IZQUIERDA
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"g")==0){
      Serial.println("#0 P2500 S500");
     }
  /////////////////////////////////////////////////BRAZO
  //DERECHA
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"h")==0){
      Serial.println("#1 P2500 S500"); //2500
     }
  //DERECHA DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1); 
    if(strcmp(myCol,"i")==0){
      ssc32u.println("#1 P2300 S500"); //2000
     }
  //DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1); 
    if(strcmp(myCol,"j")==0){
      ssc32u.println("#1 P2000 S500"); //1970
     }   
  //CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"k")==0){ 
      ssc32u.println("#1 P1820 S500");
     }
  //IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"l")==0){
      ssc32u.println("#1 P1570 S500");
     }
  //IZQUIERDA IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"m")==0){
      ssc32u.println("#1 P1320 S500");
     }   
  //IZQUIERDA
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"n")==0){
      ssc32u.println("#1 P1070 S500");
     }
  /////////////////////////////////////////////ANTEBRAZO
  //DERECHA 
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"o")==0){
      ssc32u.println("#2 P500 S500");
     }
  //DERECHA DERECHA CENTRO      
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"p")==0){
      ssc32u.println("#2 P820 S500");
     }
  //DERECHA CENTRO      
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"q")==0){
      ssc32u.println("#2 P1120 S500");
     }   
  //CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"r")==0){
      ssc32u.println("#2 P1400 S500");
     }
  //IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"s")==0){
      ssc32u.println("#2 P1700 S500");
     }
  //IZQUIERDA IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"t")==0){
      ssc32u.println("#2 P2000 S500");
     }
  //IZQUIERDA
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"u")==0){
      ssc32u.println("#2 P2300 S500");
     }
  
  ////////////////////////////////////////////////MANO
  //DERECHA 
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"w")==0){
      ssc32u.println("#3 P2450 S500");    
     }
  //DERECHA DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"x")==0){
      ssc32u.println("#3 P2150 S500");
     }
  //DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"y")==0){
      ssc32u.println("#3 P1850 S500");
     }
  //CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"z")==0){
      ssc32u.println("#3 P1500 S500");
     }
  //IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"0")==0){
      ssc32u.println("#3 P1250 S500");
     }
  //IZQUIERDA IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"1")==0){
      ssc32u.println("#3 P1050 S500");
     }
  //IZQUIERDA
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"2")==0){
      ssc32u.println("#3 P700 S500");
     }
  
  /////////////////////////////////////////////PINZAS
  //DERECHA
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"3")==0){
      ssc32u.println("#4 P500 S500");    
     }
  //DERECHA DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"4")==0){
      ssc32u.println("#4 P680 S500");
     }
  //DERECHA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"5")==0){
      ssc32u.println("#4 P840 S500");
     }   
  //CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"6")==0){
      ssc32u.println("#4 P1000 S500");
     }
  //IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"7")==0){
      ssc32u.println("#4 P1160 S500");
     }
  //IZQUIERDA IZQUIERDA CENTRO
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"8")==0){
      ssc32u.println("#4 P1320 S500");
     }
  //IZQUIERDA
    Serial.readBytesUntil(lf, myCol, 1);
    if(strcmp(myCol,"9")==0){
      ssc32u.println("#4 P1800 S500");
     } 
}






