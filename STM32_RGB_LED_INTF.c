#include <stdio.h>
#include "LED.h"

// Initialize the LED objects
// Return 0: LEDs successfully initialized
// Return 1: One or more of the input values was out of bounds
int init_LEDs(Timer* pwmTimerArray, int length){
    
    // Initialize LEDs to off
    // For each RGB LED:
        // Initialize PWM clock on microprocessor - 3 channels
        // Set duty cycle to 0% for all 3 channels used

    return 0;
}

// Change the brightness of the given LEDobject to a value given by targetBrightness (between 0-100)
// Return 0: Brightness successfully changed
// Return 1: One or more of the input values was out of bounds 
int change_LED_Brightness(Timer* pwmTimer, int newBrightness){
    
    // If any of the colors is "true" or on, set the duty cycle of that color to the new brightness
    
    return 0;
}

// Change the color of the given LEDobject LED based on the RGB values given.
// Return 0: Colors successfully changed
// Return 1: One or more of the input values was out of bounds
// *RGB values could be uint8, as they range from 0-255* - not done here because I don't think uint8 is native to C
int change_LED_Color(Led* led_pointer, int newRedVal, int newGreenVal, int newBlueVal){
    
    // Change the previous LED color's duty cycle to 0 and the new LED color's duty cycle to brightness

    return 0;
}

// Prints out all the values in the ledArray
void printLEDs(Led* ledArray, int length){
    for ( int i=0; i<length; i++ ){
        printf("LED %d: ", i);
        printf("redVal: %d, ", ledArray[i].redVal);
        printf("greenVal: %d, ", ledArray[i].greenVal);
        printf("blueVal: %d, ", ledArray[i].blueVal);
        printf("brightness: %d.\n", ledArray[i].brightness);
    }
}

// Return 0 if everything works correctly
// Return 1 if there is an initialization error
// Return 2 if there is a problem with changing brightness
// Return 3 if there is a problem with changing colors
// *NOTE* TESTS SHOWN HERE ARE NOT EXHAUSTIVE
int main(void){
   
}