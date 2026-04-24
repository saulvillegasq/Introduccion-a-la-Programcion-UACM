#include <stdio.h>

void evaluar(float promedio, int *aprobado, char *letra);

int main() {
    float promedio = 9.5;
    int aprobado;
    char letra;

    evaluar(promedio, &aprobado, &letra);

    printf("Promedio: %.2f\n", promedio);
    printf((aprobado>0)?"Aprobado\n":"Reprobado\n");
    printf("Letra: %c\n", letra);

    return 0;
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