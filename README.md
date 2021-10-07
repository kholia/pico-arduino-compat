# pico-arduino-compat
A compatibility layer that allows the use of Arduino libraries with the Pico C/C++ SDK.
    
## Installation

Clone the pico-arduino-compat repository

````
git clone https://github.com/fhdm-dev/pico-arduino-compat.git
````

Get the arduino-pico submodule
````
cd pico-arduino-compat
git submodule update --init arduino-compat/arduino-pico
````

## How to include an Arduino library into an existing project

First find the library from the list [here](arduino-libraries.md). Take note of the ID and the cmake target name.

Get the submodule for the library and dependent libraries
````

# cd into libs/<id>
# where id is the library ID you found previously
# eg.
cd libs/adafruit-ssd1306
./init.sh
````

In your project's CMakeLists.txt file, add the library directory as a subdirectory.

eg.   
````
add_subdirectory(/home/fhdm-dev/pico/pico-arduino-compat/libs/adafruit-ssd1306)
````

Add the library target name to target_link_libraries. Note that the target names all begin with 'pac-'

eg.   
````
target_link_libraries(boom
  pico_stdlib
  pac-adafruit-ssd1306
)
````

## Arduino Global Variables

The table below shows how the Arduino global variables such as SPI, Wire, Serial etc map to Pico peripheral instances and GPIOs

|Arduino Global Variable|Pico Peripheral Instance|GPIOs
|-----------------------|------------------------|-----
|SPI                    | spi0                   |16,17,18,19
|SPI1                   | spi1                   |12,13,14,15
|Wire                   | i2c0                   |4,5
|Wire1                  | i2c1                   |10,11
|Serial                 | Uses stdio             |USB or 0,1
|Serial1                | uart0                  |0,1
|Serial2                | uart1                  |8,9


## Compatibility

Arduino libraries that use direct register access or interrupts will not work.

## Directory structure

The directory structure of this repository is as follows:   
arduino-compat: The compatibility layer    
libs: The Arduino libraries and associated CMakeLists.txt files and examples    
official-libs: Selected libraries from the official Arduino libraries repository   
pico-libs: The C/C++ wrappers for the Arduino libraries    

## FAQ

### How is pico-arduino-compat different from the Arduino RP2040 mbed core or the Arduino-Pico core?
These cores allow you to use the Arduino IDE to program the Pico/RP2040. pico-arduino-compat is for using Arduino libraries with the Pico C/C++ SDK.

### Can Arduino sketches be used with pico-arduino-compat?
If the sketch uses functions and libraries implemented by pico-arduino-compat then it should run with a little modification. Most of the examples under arduino-libs are just modified Arduino sketches.

### Do applications using pico-arduino-compat run slower or use more resources?
Probably!

### Do Arduino Libraries need to be modified to work with pico-arduino-compat?
Some don't. Some probably do. Some probably wont work at all.

## Acknowledgments
Much of the code uses earlephilhower's Pi Pico Arduino core.





