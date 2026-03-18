#include <stdio.h>

int main(void) {
    char inicial = 'S';
    int edad = 26;
    float estatura = 1.84f;
    double peso = 98.25;

    printf("Inicial: %c\n", inicial);
    printf("Edad: %d\n", edad);
    printf("Estatura: %.2f\n", estatura);
    printf("Peso: %.2lf\n", peso);

    return 0;
}
