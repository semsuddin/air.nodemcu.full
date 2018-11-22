// Load CityOS framework first
#include "CityOS.h"

// We are using NodeMCU v2 board
#include "NodeMCU.h"

// Add inputs (sensors) header files
// #include "BME_280.h"
// #include "PMS_1003.h"
// #include "DHT_22.h"
#include "MotionSensor.h"

// Add output
// #include "WS_2812_Ring.h"

// Accesss to all data
CityOS ctos;

// Initialize PINS on all inputs and outputs
// BME_280 bme(D3, D4); // SCL, SDA
// DHT_22 dht(D1);
// PMS_1003 pm(D5, D6);
// WS_2812_Ring ring(D2, 12); // Comment for RGB
MotionSensor motionSensor(D0);
