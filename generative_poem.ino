#include <SPI.h>

#include <TFT_eSPI.h>

#define WAIT 500

#define TFT_NAVY        0x000F      /*   0,   0, 128 */
#define TFT_BLUE        0x001F      /*   0,   0, 255 */
#define TFT_DARKCYAN    0x03EF      /*   0, 128, 128 */
#define TFT_CYAN        0x07FF      /*   0, 255, 255 */
#define TFT_SKYBLUE     0x867D      /* 135, 206, 235 */
#define TFT_SILVER      0xC618      /* 192, 192, 192 */
#define TFT_WHITE       0xFFFF      /* 255, 255, 255 */
#define TFT_RED         0xF800      /* 255,   0,   0 */
#define TFT_BLACK       0x0000      /*   0,   0,   0 */

TFT_eSPI tft = TFT_eSPI();

void setup() {
  tft.init();
  tft.setRotation(1);
}

void loop() {
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLUE);
  tft.setTextColor(TFT_WHITE, TFT_BLUE);

  tft.drawString("Not Waving", 10, 0, 2);
  tft.drawString("But Drowning", 10, 40, 2);
  tft.drawString("by Stevie Smith", 20, 80, 2);
  delay(1000);

  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);

  // Nobody heard him,
  String text = "Nobody heard him,";
  int width = text.length();

  String s = "";
  int center_y = tft.height()/2-10;
  int center_x = tft.width()/2-10;
  
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 10);
    tft.print(s);
    
    delay(150);
   }

  // the
  text = "the";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 30);
    tft.print(s);
    
    delay(150);
   }

  // DEAD
  tft.setTextSize(5);
  tft.fillScreen(TFT_RED);
  tft.setTextColor(TFT_WHITE, TFT_RED);
  tft.drawString("DEAD", 30, center_y-30, 2);
  delay(1000);

  // man,
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);

  text = "man,";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 10);
    tft.print(s);
    
    delay(150);
   }

  // But still he lay
  text = "But still he lay";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 30);
    tft.print(s);
    
    delay(150);
   }

  // moaning
  tft.setTextSize(5);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_BLUE, TFT_WHITE);
  tft.drawString("moaning:", 8, center_y, 1);
  delay(1000);

  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);

  // I was much further
  text = "I was much further";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 10);
    tft.print(s);
    
    delay(150);
   }

  // out
  text = "out";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 30);
    tft.print(s);
    
    delay(150);
   }
   
  // than you thought
  text = "than you thought";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 50);
    tft.print(s);
    
    delay(150);
   }

  // And not waving but
  text = "And not waving but";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(0, 70);
    tft.print(s);
    
    delay(150);
   }

  // drowning
  tft.setTextSize(2);
  tft.fillScreen(TFT_SKYBLUE);
  tft.setTextColor(TFT_BLUE, TFT_SKYBLUE);
  tft.drawString("drowning.", center_x, center_y, 1);
  delay(3000);

  // Poor chap,
  tft.setTextSize(2);
  tft.fillScreen(TFT_SILVER);
  tft.setTextColor(TFT_BLUE, TFT_SILVER);
  
  text = "Poor chap,";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 10);
    tft.print(s);
    
    delay(100);
   }

  // he always loved
  text = "he always loved";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 30);
    tft.print(s);
    
    delay(100);
   }

  // larking
  text = "larking";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 50);
    tft.print(s);
    
    delay(100);
   }

  // and now he's dead
  tft.setTextColor(TFT_RED, TFT_SILVER);
  text = "and now he's dead";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 70);
    tft.print(s);
    
    delay(100);
   }
   delay(100);

  // it must have been
  tft.setTextColor(TFT_BLUE, TFT_SILVER);
  text = "it must have been";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 90);
    tft.print(s);
    
    delay(100);
   }

  // too cold
  tft.setTextSize(2);
  tft.fillScreen(TFT_CYAN);
  tft.setTextColor(TFT_BLUE, TFT_CYAN);
  tft.drawString("TOO COLD.", center_x, center_y, 2);
  delay(1000);

  // for him his heart
  tft.setTextColor(TFT_BLUE, TFT_SILVER);
  text = "for him his heart";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 10);
    tft.print(s);
    
    delay(100);
   }

  // gave way,
  tft.setTextColor(TFT_BLUE, TFT_SILVER);
  text = "gave way,";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 30);
    tft.print(s);
    
    delay(100);
   }

  // they said
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("They said.", center_x, center_y, 2);
  delay(1000);

  // Oh,
  tft.setTextSize(2);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_BLACK, TFT_WHITE);
  tft.drawString("Oh,", center_x-30, center_y, 2);
  delay(500);

  // no,
  tft.setTextSize(2);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_BLACK, TFT_WHITE);
  tft.drawString("no,", center_x-30, center_y, 2);
  delay(500);

  // no
  tft.setTextSize(5);
  tft.fillScreen(TFT_WHITE);
  tft.setTextColor(TFT_BLACK, TFT_WHITE);
  tft.drawString("no", center_x-30, center_y, 2);
  delay(500);

  // NO
  tft.setTextSize(7);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_RED, TFT_BLACK);
  tft.drawString("NO", 0, center_y, 2);
  delay(500);

  // it was too cold
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  text = "it was too cold";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 10);
    tft.print(s);
    
    delay(100);
   }

  // always
  text = "always";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 30);
    tft.print(s);
    
    delay(100);
   }
   
  // (Still the dead one lay moaning)
  tft.setTextSize(1);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("(Still the dead one lay moaning)", 0, center_y, 1);
  delay(3000);

  // I was much too far out all my life
  text = "I was much too far out all my life";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 10);
    tft.print(s);
    
    delay(150);
   }
   delay(2000);

  // And not waving
  tft.setTextSize(2);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  text = "And not waving";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 10);
    tft.print(s);
    
    delay(100);
   }
   delay(500);

  // but
  tft.setTextSize(4);
  tft.fillScreen(TFT_BLACK);
  tft.setTextColor(TFT_BLUE, TFT_BLACK);
  text = "but";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    s += text.charAt((i) % width);
    tft.setCursor(10, 40);
    tft.print(s);
    
    delay(100);
   }
   delay(500);

  // DROWNING
  tft.setTextSize(4);
  tft.fillScreen(TFT_WHITE);
  
  int red = 0;
  text = "DROWNING";
  width = text.length();
  s = "";
  for (int i=0; i < width; i++) {
    if (red == 0) {
      tft.setTextColor(TFT_BLUE, TFT_BLACK);
      red = 1;
    } else {
      tft.setTextColor(TFT_RED, TFT_BLACK);
      red = 0;
    }
    
    s += text.charAt((i) % width);
    tft.setCursor(10, 30);
    tft.print(s);
    
    delay(300);
   }
   
   delay(1000);
}
