#include <stdio.h>

void intercambiar(float *a, float *b) ;

int main() {
    float x = 8.0;
    float y = 5.0;

    printf("Antes: x = %.2f, y = %.2f\n", x, y);

    intercambiar(&x, &y);

    printf("Despues: x = %.2f, y = %.2f\n", x, y);

    return 0;
}

void intercambiar(float *a, float *b) {
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
}