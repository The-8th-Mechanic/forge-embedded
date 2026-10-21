#include <Arduino.h>
#include <util/delay.h>

void setup() {
Serial.begin(9600);

const char *data_type[] = {
"uint8_t","int8_t","uint16_t","int16_t","uint32_t","int32_t","char",
"float","double","long"
};

uint8_t count = sizeof(data_type)/sizeof(data_type[0]);

for (uint8_t i = 0; i < count; i++)
{
    Serial.print(data_type[i]);
    Serial.println(sizeof(data_type[i]));

    _delay_ms(1000);
}

}

void loop() {

}

