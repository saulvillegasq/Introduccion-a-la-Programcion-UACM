#include <stdio.h>


int esta_aprobado(float promedio);
// float promedio; Variable global

int main() {
    float promedio = 7.2; //Variable local

    if (esta_aprobado(promedio))
        printf("Estudiante aprobado\n");
    else
        printf("Estudiante reprobado\n");

    return 0;
}

int esta_aprobado(float promedio) {
    if (promedio >= 6.0)
        return 1;
    else
        return 0;
}