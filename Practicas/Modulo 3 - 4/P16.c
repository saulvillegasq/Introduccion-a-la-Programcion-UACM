#include <stdio.h>

int main(void) {
    int edad = 20;
    int tiene_credencial = 1;

    printf("Puede entrar? %d\n", (edad >= 18) && (tiene_credencial == 1));

    return 0;
}