#include <stdio.h>

int main(void) {
    const float PI = 3.1416f;
    float radio = 5.0f;
    float area = PI * radio * radio;

    printf("Radio = %.2f\n", radio);
    printf("Area = %.4f\n", area);

    return 0;
}