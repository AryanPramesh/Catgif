#include <SPI.h>
#include <TFT_eSPI.h>  
#include "output.h"
 #define animation_height 320
 #define animation_width 240

TFT_eSPI tft = TFT_eSPI();
void setup() {
  Serial.begin(115200);
  tft.init();
  tft.setRotation(0);
  tft.setSwapBytes(true);
  tft.fillScreen(TFT_WHITE);
  delay(1000);
  tft.fillScreen(TFT_BLACK);
  delay(1000);
 
}
void loop() {
   for (int i = 0; i < 2; i++) {
    tft.pushImage(0, 0, animation_width, animation_height, epd_bitmap_allArray[i]);
    delay(100);
  }
  
}