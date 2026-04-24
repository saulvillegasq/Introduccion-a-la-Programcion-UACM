#include <stdio.h>

//Prototipo
float calcular_promedio(float a, float b, float c);

int main() {
    float p;

    //Lamado
    p = calcular_promedio(8.5, 9.0, 7.5);

    printf("Promedio: %.2f\n", p);

    return 0;
}

//Definición
float calcular_promedio(float a, float b, float c) {
    return (a + b + c) / 3.0;
}