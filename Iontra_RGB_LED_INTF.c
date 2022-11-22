#include <stdio.h>
#include "LED.h"

// Initialize the LED objects
int init_LEDs(Led* ledArray){
    return 0;
}

// Change the brightness of the given LEDobject to a value given by targetBrightness (between 0-100) 
int change_LED_Brightness(Led* led, int targetBrightness){
    return 0;
}

// Change the color of the given LEDobject LED based on the RGB values given.
// *RGB values could be uint8, as they range from 0-255*
int change_LED_Color(Led* led, int newRedVal, int newGreenVal, int newBlueVal){
    return 0;
}

int main(void){
    // Create an empty array that can hold up to 5 Led structs
    Led ledArray[5];

    for( int i=0; i<5; i++){
        ledArray[i].redVal = 255;
        ledArray[i].greenVal = 255;
        ledArray[i].blueVal = 255;
        ledArray[i].brightness = 100;
    }
    
    // Test that the LEDs inside ledArray got initialized like I think
    for( int i=0; i<5; i++){
        printf("\nLED %d: ", i);
        printf("redVal: %d, ", ledArray[i].redVal);
        printf("greenVal: %d, ", ledArray[i].greenVal);
        printf("blueVal: %d, ", ledArray[i].blueVal);
        printf("brightness: %d, ", ledArray[i].brightness);
    }

    return 0;
}