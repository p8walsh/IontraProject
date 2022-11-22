#include <stdio.h>
#include "LED.h"

// Initialize the LED objects
int init_LEDs(Led* ledArray){

}

// Change the brightness of the given LEDobject to a value given by targetBrightness (between 0-100) 
int change_LED_Brightness(Led* led, int targetBrightness){
    
}

// Change the color of the given LEDobject LED based on the RGB values given.
// *RGB values could be uint8, as they range from 0-255*
int change_LED_Color(Led* led, int newRedVal, int newGreenVal, int newBlueVal){
    
}

int main(void){
    // Create an empty array that can hold up to 5 Led structs
    Led ledArray[5];
    
    // Test that the LEDs inside ledArray got initialized like I think
    printf(ledArray[0].redVal);
    printf(ledArray[0].greenVal);
    printf(ledArray[0].blueVal);
    printf(ledArray[0].brightness);
}