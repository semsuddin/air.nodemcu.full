#include <CTOS_DHT22.h>

CTOS_DHT22::CTOS_DHT22(int cpin)
{
    pin = cpin;
    input("air.temperature");
    input("air.humidity");
    input("air.temperature_feel");
    sensor(this);
}

void CTOS_DHT22::setup()
{ }

void CTOS_DHT22::loop()
{ }