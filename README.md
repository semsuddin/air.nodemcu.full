# CityOS Air Device [![Build Status](https://travis-ci.com/semsuddin/air.nodemcu.full.svg?branch=custom)](https://travis-ci.com/semsuddin/air.nodemcu.full)

- [Get Started - quick version](#Get started - quick version)
  * [Get the following components](#Get the following components)
  * [Connect your ESP8266 device with the sensors](#Connect your ESP8266 device with the sensors)
  * [Build and flash the code](#Build and flash the code)
- [Get started - longer version](#http://docs.cityos.io/v1.0/docs/installations)

## Get started - quick version

* ### Get the following components:

| No        | Description                                               | Links                       | Quantity             | Price ($) |
| --------- |:---------------------------------------------------------:| ---------------------------:| --------------------:| ---------:|
| 1         | ESP8266 NodeMCU                                           | http://ebay.to/2hWRz72      | 1                    | $3.36     |
| 2         | PMS1003 - Digital Laser Dust Sensor (PM2.5 and PM10)      | http://tinyurl.com/zd9rrva  | 1                    | $14.2     |
| 3         | Prototyping Board                                         | http://ebay.to/2zSJso2      | 1                    | $1.4      |
| 4         | Prototyping Breadboard                                    | http://ebay.to/2hY16Jx      | 1                    | $1.0      |
| 5         | DHT22 - Digital Temperature and Humidity Sensor           | http://ebay.to/2hWRdO2      | 1                    | $2.82     |
| 3         | Micro USB 2.0 Cable, 5V 2.4A                              | http://bit.ly/2kp08JK       | 1                    | $1.5      |
| 3         | EU 5V, 2A USB Wall Charge                                 | http://ebay.to/2AeDj28      | 1                    | $1.3      |
| 3         | Male to Male Jumper Cable                                 | http://ebay.to/2pGsAMX      | 1 pack (65)          | $1.6      |
| 3         | Solid Core Hookup Wire                                    | http://ebay.to/2kxmiM5      | 1 pack of all colors | $15       |
| 3         | LED Ring                                                  | http://ebay.to/2j74Uu7      | 1                    | $3        |
| 3         | Resistors                                                 | http://ebay.to/2kO1u3r      | 100, 10k 470 ohm, x1 | $1        |
| 3         | Male Crimp Pins                                           | http://ebay.to/2kkgi8W      | 10                   | $8.4      |
| 3         | Capacitor                                                 | http://ebay.to/2rSm3Qv      | 1 x 1000uF 16V       | $1.6      |
| 3         | Acryllic DIY sheets or 3D printed enclosure               | local store or DIY          |                      |           |

* ### Connect your ESP8266 device with the sensors

Schema: https://cityos-air.readme.io/docs/standard-version-with-led-ring

* ### Build and flash the code

Prerequisites: VSCode, Git, Python, PlatformIO (as VSCode extension)

1. Clone this repository
2. Connect your ESP device via microusb cable to the PC (if it's not recognized, install "CP210x USB to UART Bridge VCP" driver)
3. Copy "Config.ctos.h.sample" to "Config.ctos.h" and update values according to your WIFI info (token can be fetched from https://cityos.io/token after creating an account there)
4. Copy "Device.h.sample" to "Device.h", uncommented lines should correspond to your schema and components
5. Use "Air.ino" to enable/disable some parameters for debugging purposes
6. Use PlatformIO: Build & Flash command to build and flash the firmware to your ESP
7. Use PlatformIO: Monitor command to get debugging data (such as current values of the sensors)

If everything went well, you should be able to see your device and it's current data under https://cityos.io/device 

## Get started - longer version
Documentation http://docs.cityos.io/v1.0/docs/installations

Thanks for your contribution to the community!