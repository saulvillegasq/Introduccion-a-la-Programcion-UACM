#include <stdio.h>

int main() {
    float calificaciones[5];
    float suma = 0;

    for(int i = 0; i < 5; i++) {
        printf("Calificacion %d: ", i + 1);
        scanf("%f", &calificaciones[i]);
        suma += calificaciones[i];
    }

    printf("Promedio = %.2f\n", suma / 5);

    return 0;
}