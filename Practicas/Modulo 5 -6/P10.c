#include <stdio.h>

int sumar(int a, int b) {
    return a + b;
}

int main() {
    int (*operacion)(int, int);

    operacion = sumar;

    printf("Resultado: %d\n", operacion(4, 5));

    return 0;
}