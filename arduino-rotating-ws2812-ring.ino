#include <Adafruit_NeoPixel.h>

#define PIN 2
#define NUM_LEDS 7

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  int color = 10;
  for(int pixel = 1; pixel < 7; pixel++) {
    strip.setPixelColor(pixel, color, 0, 0);
    strip.show();
    strip.setPixelColor(pixel, 0, 0, 0);  
    delay(100);
  }
}
