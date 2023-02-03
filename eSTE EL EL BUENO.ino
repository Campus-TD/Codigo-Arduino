#include <SoftwareSerial.h>	// libreria que permite establecer pines digitales
//YA NO LE MUEVAS WEEE XD FUNCIONA EN EL 14 Y 15;

void setup(){
  Serial.begin(9600);		// comunicacion de monitor serial a 9600 bps
  Serial.println("Listo");	// escribe Listo en el monitor
  Serial3.begin(38400);		// comunicacion serie entre Arduino y el modulo a 38400 bps
}

void loop(){
if (Serial3.available())     	// si hay informacion disponible desde modulo
   Serial.write(Serial3.read()); 	// lee Bluetooth y envia a monitor serial de Arduino

if (Serial.available())   	// si hay informacion disponible desde el monitor serial
   Serial3.write(Serial.read()); 	// lee monitor serial y envia a Bluetooth

}
