A C wrapper for the Arduino LiquidCrystal library.

## Usage

First, create a *liquid_crystal* struct
````
    liquid_crystal *lcd = lcd_create(12, 11, 5, 4, 3, 2);
````

Do stuff.   
eg.
````
lcd_begin(lcd, 16, 2);
lcd_clear(lcd);
lcd_print(lcd, "Waiting....")
````

Refer to the [LiquidCrystal](https://github.com/arduino-libraries/LiquidCrystal) library on Github.

Chapter 11 (Crystal Ball) of the offical Arduino Projects Book shows how to wire up the LCD.

## Examples
### How to build
````
cd examples
mkdir build
cd build
cmake ..
make
````