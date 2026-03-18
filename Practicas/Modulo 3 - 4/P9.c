#include <stdio.h>

int main(void) {
    char inicial;
    int edad;
    float promedio;

    printf("Ingresa tu inicial: ");
    scanf(" %c", &inicial);

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Ingresa tu promedio: ");
    scanf("%f", &promedio);

    printf("Inicial: %c\n", inicial);
    printf("Edad: %d\n", edad);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}