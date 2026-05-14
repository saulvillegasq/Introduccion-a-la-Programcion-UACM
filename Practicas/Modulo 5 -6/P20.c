#include <stdio.h>

struct Alumno {
    char nombre[30];
    int edad;
    float promedio;
};

int main() {
    struct Alumno a;

    printf("Nombre: ");
    scanf("%s", a.nombre);

    printf("Edad: ");
    scanf("%d", &a.edad);

    printf("Promedio: ");
    scanf("%f", &a.promedio);

    printf("\nDatos capturados:\n");
    printf("Nombre: %s\n", a.nombre);
    printf("Edad: %d\n", a.edad);
    printf("Promedio: %.2f\n", a.promedio);

    return 0;
}