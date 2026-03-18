#include <stdio.h>

int main(void) {
    char inicial;
    int edad;
    float estatura;
    double peso;
    double imc;
    unsigned char bits = 5;

    printf("Ingresa tu inicial: ");
    scanf(" %c", &inicial);

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("Ingresa tu estatura en metros: ");
    scanf("%f", &estatura);

    printf("Ingresa tu peso en kg: ");
    scanf("%lf", &peso);

    imc = peso / ((double)estatura * (double)estatura);

    printf("\n--- DATOS ---\n");
    printf("Inicial: %c\n", inicial);
    printf("Edad: %d\n", edad);
    printf("Estatura: %.2f\n", estatura);
    printf("Peso: %.2lf\n", peso);
    printf("IMC: %.2lf\n", imc);

    printf("\n--- OPERADORES ---\n");
    printf("Edad > 18: %d\n", edad > 18);
    printf("bits = %u\n", bits);
    printf("bits << 1 = %u\n", bits << 1);
    printf("bits & 3 = %u\n", bits & 3);

    return 0;
}