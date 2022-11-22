all: main.exe

main.exe: Iontra_RGB_LED_INTF.c LED.h
	gcc -o main.exe -v -Wall -Wextra Iontra_RGB_LED_INTF.c 
