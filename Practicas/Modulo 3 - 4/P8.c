#include <stdio.h>

int main(void) {
    float temperatura;

    printf("Ingresa la temperatura: ");
    scanf("%f", &temperatura);

    printf("La temperatura capturada es %.2f\n", temperatura);

    return 0;
}