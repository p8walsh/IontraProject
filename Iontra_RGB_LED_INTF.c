#include <stdio.h>
#include "LED.h"

// Initialize the LED objects
// Return 0: LEDs successfully initialized
// Return 1: One or more of the input values was out of bounds
int init_LEDs(Led* ledArray, int length){
    // length cannot be less than 1 because that would result in errors further on
    if ( length < 1 ){
        return 1;
    }

    // Initialize LEDs to off
    for ( int i=0; i<length; i++ ){
        ledArray[i].redVal = 0;
        ledArray[i].greenVal = 0;
        ledArray[i].blueVal = 0;
        ledArray[i].brightness = 0;
    }
    
    return 0;
}

// Change the brightness of the given LEDobject to a value given by targetBrightness (between 0-100)
// Return 0: Brightness successfully changed
// Return 1: One or more of the input values was out of bounds 
int change_LED_Brightness(Led* led_pointer, int newBrightness){
    if ( (newBrightness < 0) || (newBrightness > 100) ){
        return 1;
    }
    
    led_pointer->brightness = newBrightness;
    
    return 0;
}

// Change the color of the given LEDobject LED based on the RGB values given.
// Return 0: Colors successfully changed
// Return 1: One or more of the input values was out of bounds
int change_LED_Color(Led* led_pointer, int newRedVal, int newGreenVal, int newBlueVal){
    // Return non-zero if more than 1 color is attempting to be set
    if ( newRedVal ){
        if ( ( newGreenVal ) || ( newBlueVal ) ) {
            return 1;
        }
    }
    else if ( newGreenVal ){
        if ( newBlueVal ){
            return 1;
        }
    }

    led_pointer->redVal = newRedVal;
    led_pointer->greenVal = newGreenVal;
    led_pointer->blueVal = newBlueVal;

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
    // Create an empty array that can hold up to 5 Led structs
    Led ledArray[5];

    // Use a variable to hold length for easy modification
    int length = 5;
    init_LEDs(ledArray, length);
    
    // Test that the LEDs inside ledArray got initialized like I think
    printLEDs(ledArray, length);
    
    // Use code to test what is being visually confirmed above
    for ( int i=0; i<length; i++ ){
        if ( ledArray[i].redVal != 0 ){
            printf("Error: redVal not initialized correctly. redVal: %d: \n", ledArray[i].redVal);
            return 1;
        }
        if ( ledArray[i].greenVal != 0 ){
            printf("Error: greenVal not initialized correctly. greenVal: %d: \n", ledArray[i].greenVal);
            return 1;
        }
        if ( ledArray[i].blueVal != 0 ){
            printf("Error: blueVal not initialized correctly. blueVal: %d: \n", ledArray[i].blueVal);
            return 1;
        }
        if ( ledArray[i].brightness != 0 ){
            printf("Error: brightness not initialized correctly. brightness: %d: \n", ledArray[i].brightness);
            return 1;
        }
    }

    // Test changing brightness
    
    // Change a single LED's brightness in a valid way
    int result = change_LED_Brightness(&ledArray[0], 30);
    if ( ledArray[0].brightness != 30 ){
        printf("Error changing a single LED's brightness in a valid way\n");
        return 2;
    }

    // Try changing a single LED's brightness in an invalid way
    result = change_LED_Brightness(&ledArray[0], -1);
    if ( ( result == 0 ) || (ledArray[0].brightness == -1 ) ){
        printf("Error changing a single LED's brightness in an invalid way\n");
        return 2;
    }

    // Try changing all the LED's brightnesses in a valid way
    for ( int i=0; i<length; i++){
        result = change_LED_Brightness(&ledArray[i], i % 255);
        if ( ( result != 0 ) || ( ledArray[i].brightness != (i % 255) ) ){
            printf("Error changing all LED's brightnesses in a valid way during assignment\n");
            return 2;
        }
    }
    // Make sure none of the LED's brightnesses affected each other
    for ( int i=0; i<length; i++){
        if ( ledArray[i].brightness != (i % 255) ){
            printf("Error changing all LED's brightnesses in a valid way after assignment\n");
            return 2;
        }
    }

    // Test changing color

    // Change a single LED's color in a valid way
    result = change_LED_Color(&ledArray[0], 1, 0, 0);
    if ( ( ledArray[0].redVal != 1 ) || ( ledArray[0].greenVal != 0 ) || ( ledArray[0].blueVal != 0 ) ){
        printf("Error changing a single LED's color in a valid way\n");
        return 2;
    }

    // Change a single LED's color in an invalid way
    result = change_LED_Color(&ledArray[0], 1, -1, 1);
    if ( ( ledArray[0].redVal == 1 ) || ( ledArray[0].greenVal == -1 ) || ( ledArray[0].blueVal == 1 ) || ( result == 0 ) ){
        printf("Error changing a single LED's color in an invalid way\n");
        return 2;
    }

    return 0;
}