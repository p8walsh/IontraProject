Goal is to have LED implementation for RGB LED on STM32 very similar to generic LED interface. SIMILARITY IS IMPORTANT for simple transition between microcontrollers.

Make theoretical unit tests - probably won't be able to actually run them but they could show that I understand them at a basic level.

provides functions - no GUI, just
	LEDobjects init_LEDs(LEDaddresses)
	debugVal change_LED_Color(LEDobject)
	debugVal change_LED_Brightness(LEDobject, targetBrightness)