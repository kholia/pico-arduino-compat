A C wrapper for the Adafruit_SSD1306 library.

## Usage

First, create an *adafruit_ssd1036* struct
````
    adafruit_ssd1306 *ssd1306 = adafruit_ssd1306_create_i2c(screen_width, screen_height, i2c0);
````

C wrapper functions corresponding to member functions of the underlying Adafruit_SSD1306 class all take an *adafruit_ssd1306* struct as the first argument.
These functions all begin with the ssd106_ prefix.

eg.
````
ssd1306_clearDisplay(ssd1306); // calls Adafruit_SSD1306::clearDisplay
````

The Adafruit_SSD1306 class is a sublass of Adafruit_GFX which in turn is a subclass of Print.
To call the C wrapper functions for these classes, pass a 'struct adafruit_gfx' as the first argument to the function.
These functions all begin with the gfx_ prefix.

eg.
````
    gfx_setTextSize(ssd1306->gfx, 1);
	gfx_setTextColor(ssd1306->gfx, WHITE);
	gfx_setCursor(ssd1306->gfx, 0,screen_height/3); // calls Adafruit_GFX::setCursor
````

See the Adafruit documentation for more information regarding their APIs.    
[Adafruit_SSD1306](https://github.com/adafruit/Adafruit_SSD1306)   
[Adafruit-GFX-Library](https://github.com/adafruit/Adafruit-GFX-Library)


## Examples
### How to build
````
cd examples
mkdir build
cd build
cmake ..
make
````

### Pin Assignments
text-i2c - i2c1 gpio 10 & 11    
ssd1306_128x32_i2c - i2c0, gpio 4 & 5    
