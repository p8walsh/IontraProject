all: main.exe

main.exe: STM32_RGB_LED_INTF.c 
	gcc -o main.exe -v -Wall -Wextra STM32_RGB_LED_INTF.c 