#include <stdio.h>

int main() {
    int datos[6] = {12, 45, 7, 89, 23, 4};
    int mayor = datos[0];
    int menor = datos[0];

    for(int i = 1; i < 6; i++) {
        if(datos[i] > mayor) {
            mayor = datos[i];
        }

        if(datos[i] < menor) {
            menor = datos[i];
        }
    }

    printf("Mayor = %d\n", mayor);
    printf("Menor = %d\n", menor);

    return 0;
}