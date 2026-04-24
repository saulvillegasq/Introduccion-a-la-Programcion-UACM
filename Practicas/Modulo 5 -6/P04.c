#include <stdio.h>

void modificar(float *calificacion) ;

int main() {
    float calificacion = 7.5;

    modificar(&calificacion);

    printf("Calificacion: %.2f\n", calificacion);

    return 0;
}

void modificar(float *calificacion) {
    *calificacion = 10.5;
}
