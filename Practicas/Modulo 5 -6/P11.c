#include <stdio.h>

float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        printf("Error: division entre cero\n");
        return 0;
    }

    return a / b;
}

int main() {
    float a = 10;
    float b = 5;
    int opcion;

    float (*operacion)(float, float);

    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            operacion = sumar;
            break;
        case 2:
            operacion = restar;
            break;
        case 3:
            operacion = multiplicar;
            break;
        case 4:
            operacion = dividir;
            break;
        default:
            printf("Opcion invalida\n");
            return 1;
    }

    printf("Resultado: %.2f\n", operacion(a, b));

    return 0;
}