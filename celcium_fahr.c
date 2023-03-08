#include <stdio.h>

float fahr(float c) {
    return c * 9 / 5 + 32;
}

float cel(float f) {
    return (f - 32) * 5 / 9;
}

int main(void) {

    printf("What's the scale? Fahrenheit/Celsius\n");
    char c = getchar();
    float x;
    printf("Input the value: ");
    scanf("%f", &x);
    if (c == 'F') {
        printf("%.3f", cel(x));
    } else if (c == 'C') {
        printf("%.3f", fahr(x));
    } else {
        printf("\nWhat the hell is it?");
        return 404;
    }
    return 0;
}