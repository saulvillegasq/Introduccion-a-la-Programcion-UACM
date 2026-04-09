#include <stdio.h>

int main() {

    int temp = 80;
    int presion = 50;

    const char *accion;

    // -----------------------------------------
    // VERSION ORIGINAL (IF ANIDADO)
    // -----------------------------------------
    if (temp > 70) {
        if (presion > 60) {
            accion = "APAGAR";
        } else {
            accion = "ENFRIAR";
        }
    } else {
        if (presion > 60) {
            accion = "VENTEAR";
        } else {
            accion = "NORMAL";
        }
    }

    printf("Accion (if): %s\n", accion);

    // -----------------------------------------
    // VERSION CON TERNARIO ANIDADO
    // -----------------------------------------
    /*
    CAMBIO:
    - Se representa un árbol de decisión completo en una sola expresión
    - Cada condición interna depende de la anterior
    */

    accion =
        (temp > 70)
            ? ((presion > 60) ? "APAGAR" : "ENFRIAR")
            : ((presion > 60) ? "VENTEAR" : "NORMAL");

    printf("Accion (ternario): %s\n", accion);

    return 0;
}