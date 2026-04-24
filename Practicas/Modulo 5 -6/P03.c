#include <stdio.h>

void modificar(float calificacion);

int main() {
    float calificacion = 7.5;

    modificar(calificacion);

    printf("Calificacion_3: %.2f\n", calificacion);

    return 0;
}

void modificar(float calificacion) { 
    //float calificacion = 7.5;
    printf("Calificacion_1: %.2f\n", calificacion);
    calificacion = 10.0;
    printf("Calificacion_2: %.2f\n", calificacion);
}