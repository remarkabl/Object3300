//Digitial I/O w/ neopixel
// copy/paste anytime using neopixel, change ports ect

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
 #endif

 //set our signL pin
 #define PIN 12 //whatever pin you connected the strip to
//create instance of the library, called strip
// 1st parameter = # of lights
Adafruit_NeoPixel strip = Adafruit_NeoPixel (5,PIN, NEO_GRB + NEO_KHZ800);


void setup() {
  // put your setup code here, to run once:
  // start the strip
  strip.begin();
  //initialize all pixels to 'off'
  strip.show();

}

void loop() {
  // put your main code here, to run repeatedly:
//iterate through an array to set color and show
for(uint16_t i=0; i<strip.numPixels(); i++){
  //always set color first, then show the color
  strip.setPixelColor(i, 100, 0, 0); // 4 params, pixel, 3 values for color
  strip.show();
  delay(600); //in miliseconds
    }
    
 }
