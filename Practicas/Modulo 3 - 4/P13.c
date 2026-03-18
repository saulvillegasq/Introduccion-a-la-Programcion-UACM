#include <stdio.h>

int main(void) {
    int x = 10;

    printf("Valor inicial: %d\n", x);

    x += 5;
    printf("Despues de x += 5: %d\n", x);

    x -= 3;
    printf("Despues de x -= 3: %d\n", x);

    x *= 2;
    printf("Despues de x *= 2: %d\n", x);

    x /= 4;
    printf("Despues de x /= 4: %d\n", x);

    x %= 3;
    printf("Despues de x %%= 3: %d\n", x);

    return 0;
}