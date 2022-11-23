Unfortunately, I ran out of time to complete this task. As a result, Iontra_RGB_LED_INTF.c is not a good representation of how a microcontroller would control LEDs. 
Additionally, STM32_RGB_LED_INTF.c is entirely comments describing what I would've liked to have written if I had had the time to go through and understand the documentation.

I want to make it clear I do understand that the point was to make the STM32 implementation very similar to the general version and that mine is not because it is all comments.
I'm hoping that the commit history makes it clear that I really did try to make it work but at this point I am out of time so I wanted to submit something that demonstrates
both that I know the theory behind driving LEDs with microcontrollers via PWM and that I can make a general-ish interface that could be adaptable for specific implementations.

About each file:
 - LED.h is a basic header file which declares the 3 functions which are required in the interfaces.
 
 - Iontra_RGB_LED_INTF.c is the more generic interface file that doesn't contain anything specific to any specific microcontroller.
   It contains the very basic idea of what an LED interface might look like but would need modification to actually work.
 
 - STM32_RGB_LED_INTF.c is an example of what it would look like to modify Iontra_RGB_LED_INTF.c to work with an STM32 microcontroller.
   I used this manual for reference:  https://www.google.com/url?sa=t&rct=j&q=&esrc=s&source=web&cd=&cad=rja&uact=8&ved=2ahUKEwj44f_hvMP7AhVTKH0KHclvCHEQFnoECA0QAQ&url=https%3A%2F%2Fwww.st.com%2Fresource%2Fen%2Fuser_manual%2Fum1725-description-of-stm32f4-hal-and-lowlayer-drivers-stmicroelectronics.pdf&usg=AOvVaw21r2dLlr83WM6rfjwZ3NM-
   I also used this tutorial for reference: https://controllerstech.blogspot.com/2019/02/interface-rgb-led-with-stm32.html

NOTE: Tests shown in Iontra_RGB_LED_INTF.c and STM32_RGB_LED_INTF.c are NOT EXHAUSTIVE/THOROUGH. I created them mostly to test myself, but if I had more time
I would've created more tests to try to exhaustively check to ensure everything works properly.