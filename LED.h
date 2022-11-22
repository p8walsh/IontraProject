#ifndef LED
#define LED

struct LED {
    int redVal, greenVal, blueVal, brightness;
    int (*changeBrightness)(struct LED *, int newBrightness);
    int (*changeColor)(struct LED *, int newRedVal, int newGreenVal, int newBlueVal);
};

extern const struct LEDClass {
    struct LED (*new)(int redVal, int greenVal, int blueVal, int brightness);
} LED;

#endif
