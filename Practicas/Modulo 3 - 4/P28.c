#include <stdio.h>

int main() {

    int opcion = 2;

    // -----------------------------------------
    // VERSION PROBLEMATICA (SIN BREAK)
    // -----------------------------------------
    /*
    PROBLEMA:
    - No hay break en los case
    - El flujo continúa ejecutando los siguientes casos
    */

    switch (opcion) {
        case 1:
            printf("Uno\n");
        case 2:
            printf("Dos\n");
        case 3:
            printf("Tres\n");
        default:
            printf("Default\n");
    }

    /*
    SALIDA:
    Dos
    Tres
    Default

    EXPLICACION:
    - El switch entra en case 2
    - No se detiene
    - Ejecuta TODO lo que sigue
    */

    // -----------------------------------------
    // VERSION CORRECTA
    // -----------------------------------------

    switch (opcion) {
        case 1:
            printf("Uno\n");
            break;

        case 2:
            printf("Dos\n");
            break;

        case 3:
            printf("Tres\n");
            break;

        default:
            printf("Default\n");
            break;
    }

    return 0;
}