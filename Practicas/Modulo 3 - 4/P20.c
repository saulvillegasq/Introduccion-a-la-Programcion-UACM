#include <stdio.h>

int main(void) {
    unsigned char x = 255;

    printf("Valor inicial = %u\n", x);
    x = x + 1;
    printf("Despues de sumar 1 = %u\n", x);

    return 0;
}