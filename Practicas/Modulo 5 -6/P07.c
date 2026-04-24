#include <stdio.h>

float promedio_arreglo(float calificaciones[], int n) {
    float suma = 0;

    for (int i = 0; i < n; i++) {
        suma += calificaciones[i];
    }

    return suma / n;
}

int main() {
    float calificaciones[5] = {8.5, 9.0, 7.5, 10.0, 6.5};

    printf("Promedio: %.2f\n", promedio_arreglo(calificaciones, 5));

    return 0;
}