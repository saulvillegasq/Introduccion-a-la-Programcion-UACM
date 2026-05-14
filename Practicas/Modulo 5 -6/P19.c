#include <stdio.h>

struct Alumno {
    char nombre[30];
    int edad;
    float promedio;
};

int main() {
    struct Alumno alumno1 = {"Ana", 20, 9.4};

    printf("Nombre: %s\n", alumno1.nombre);
    printf("Edad: %d\n", alumno1.edad);
    printf("Promedio: %.2f\n", alumno1.promedio);

    return 0;
}