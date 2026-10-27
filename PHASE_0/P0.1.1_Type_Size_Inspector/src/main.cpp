
#include <Arduino.h>


void setup() {
Serial.begin(9600);
Serial.print("uint8_t = ");
Serial.println(sizeof(uint8_t));
Serial.print("int8_t = ");
Serial.println(sizeof(int8_t));
Serial.print("uint16_t = ");
Serial.println(sizeof(uint16_t));
Serial.print("int16_t = ");
Serial.println(sizeof(int16_t));
Serial.print("uint32_t = ");
Serial.println(sizeof(uint32_t));
Serial.print("char = ");
Serial.println(sizeof(char));
Serial.print("float = ");
Serial.println(sizeof(float));
Serial.print("double = ");
Serial.println(sizeof(double));
Serial.print("long = ");
Serial.println(sizeof(long));
Serial.print("int = ");
Serial.println(sizeof(int));
Serial.print("Pointer (int*) = ");
Serial.println(sizeof(int*));

uint16_t counter = 65530;
Serial.print("Counter = ");
Serial.println(counter);
counter += 10;
Serial.print("Counter = ");
Serial.println(counter);

uint8_t x = 200;
Serial.print("X = ");
Serial.println(x);
x = 300;
Serial.print("X = ");
Serial.println(x);

int8_t temp= 130;
Serial.print("Temp = ");
Serial.println(temp);




}

void loop() {

}

