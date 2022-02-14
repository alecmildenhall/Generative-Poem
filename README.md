# Generative-Poem
The project is a creative implementation of Stevie Smith's "Not Waving but Drowning" poem for ESP32 TTGO T-Display. generative_poem.ino displays the poem text in the stylistic interpretation of Amber Mildenhall using the SPI and TFT_eSPI libraries.

[INSERT PHOTO HERE]

The Arduino IDE version 1.8.19 for MacOS was used to write the code for this project. An ESP32 TTGO T-Display was connected to the host computer via a USB cable which was selected as the port under Tools in the IDE preferences. 

Setup:
- Connect ESP32 TTGO T-Display to computer with Arduino IDE with a power and data transferring USB cable
- Go into preferences in the Arduino IDE and enable the ESP32 board by adding the following URL to the board manager:
  - https://dl.espressif.com/dl/package_esp32_index.json
- Under Tools, go to Board and select TTGO T1 under ESP32 Arduino
- Select the correct port for your USB
- Under Tools, go to Manage Libraries and search for "tft_eSPI"
- Install TFT_eSPI by Bodmer
- Update your User_Setup_Select.h file likely under Arduino/libraries/TFT_eSPI/User_Setup_Select.h
  - Comment out line 22, //#include <User.Setup.h>
  - Uncomment line 52, #include <User_Setups/Setup25_TTGO_T_Display.h>
- Open generative_art.ino and upload it

## Troubleshooting:
ESP32 TTGO T-Display won't turn on:
- Make sure a blue light is being emitted from device, if not, this indicates that there is currently no power connected to the device. Try flipping the orientation of your power source (USB cable or wire connected to plugin for a battery). It is possible that your device may only work in one orientation.

Can't find correct port:
- It is possible that your USB cable does not support data transfer. The cable must transfer both data and power for the ESP32 to run the program.

No edits were made to the program, but it won't compile:
- Make sure to edit your User_Setup_Select.h file before uploading generative_poem.ino. 

Additional resources for setup:
[ESP32 TTGO T-Display Arduino Demo](https://www.youtube.com/watch?v=adLUgmCJKnM)
