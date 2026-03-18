#include <stdio.h>

int main(void) {
    int a, b, suma;

    printf("Ingresa dos numeros enteros: ");
    scanf("%d %d", &a, &b);

    suma = a + b;

    printf("La suma es: %d\n", suma);

    return 0;
}