#include <stdio.h>


float f2c(float c);


float f2c(float c) {
    return ((9 * c) / 5) + 32;
}

int main() {
    float c;

    printf("ENTER THE VALUE OF  C  -");
    scanf("%f",&c);

    printf("CELSIUS TO FAHRENHEIT FOR %f is %f", c, f2c(c));
    return 0;
}
