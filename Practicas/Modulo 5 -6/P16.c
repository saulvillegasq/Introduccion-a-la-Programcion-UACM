#include <stdio.h>

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int indice;

    printf("Ingresa un indice entre 0 y 4: ");
    scanf("%d", &indice);

    if(indice < 0 || indice >= 5) {
        printf("Indice invalido.\n");
        return 1;
    }

    printf("Valor = %d\n", numeros[indice]);

    return 0;
}