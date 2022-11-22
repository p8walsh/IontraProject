#ifndef LED
#define LED

// Initialize all new LEDs to bright white
typedef struct {
    int redVal, greenVal, blueVal, brightness;
} Led;

// Initialize the LED objects
int init_LEDs(Led* ledArray);

// Change the brightness of the given LEDobject to a value given by targetBrightness (between 0-100) 
int change_LED_Brightness(Led* led, int targetBrightness);

// Change the color of the given LEDobject LED based on the RGB values given.
// *RGB values could be uint8, as they range from 0-255*
int change_LED_Color(Led* led, int newRedVal, int newGreenVal, int newBlueVal);

#endif
