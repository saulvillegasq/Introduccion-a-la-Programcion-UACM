#include <stdio.h>

float promedio_simple(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

float promedio_ponderado(float a, float b, float c) {
    return (a * 0.3) + (b * 0.3) + (c * 0.4);
}

void evaluar(float promedio, int *aprobado, char *letra) {
    if (promedio >= 9.0) {
        *aprobado = 1;
        *letra = 'A';
    } else if (promedio >= 8.0) {
        *aprobado = 1;
        *letra = 'B';
    } else if (promedio >= 6.0) {
        *aprobado = 1;
        *letra = 'C';
    } else {
        *aprobado = 0;
        *letra = 'F';
    }
}

int main() {
    float c1, c2, c3;
    float promedio;
    int aprobado;
    char letra;
    int opcion;

    float (*calcular)(float, float, float);

    printf("Ingrese tres calificaciones: ");
    scanf("%f %f %f", &c1, &c2, &c3);

    printf("\nTipo de promedio:\n");
    printf("1. Promedio simple\n");
    printf("2. Promedio ponderado\n");
    printf("Opcion: ");
    scanf("%d", &opcion);

    if (opcion == 1) {
        calcular = promedio_simple;
    } else if (opcion == 2) {
        calcular = promedio_ponderado;
    } else {
        printf("Opcion invalida\n");
        return 1;
    }

    promedio = calcular(c1, c2, c3);

    evaluar(promedio, &aprobado, &letra);

    printf("\nPromedio: %.2f\n", promedio);
    printf("Aprobado: %s\n", aprobado ? "Si" : "No");
    printf("Calificacion final: %c\n", letra);

    return 0;
}