#include <stdio.h>

int main() {

    int edad = 16;
    int pais = 2;

    int acceso;

    // -----------------------------------------
    // VERSION ORIGINAL (REPETICION DE CONDICIONES)
    // -----------------------------------------
    if (edad < 18 && pais == 1) {
        acceso = 0;
    }
    else if (edad < 18 && pais == 2) {
        acceso = 0;
    }
    else if (edad < 18 && pais == 3) {
        acceso = 0;
    }
    else {
        acceso = 1;
    }

    printf("Acceso (original): %d\n", acceso);

    // -----------------------------------------
    // VERSION REDUCIDA
    // -----------------------------------------
    /*
    CAMBIOS:
    1. Se detecta que "edad < 18" se repite en todos los casos.
    2. Se agrupan los valores de "pais" en una sola condición.
    3. Se elimina la cadena innecesaria de else-if.
    */

    if (edad < 18 && (pais == 1 || pais == 2 || pais == 3)) {
        //(edad < 18 && (pais => 1 && pais =< 3))
        acceso = 0;
    } else {
        acceso = 1;
    }

    printf("Acceso (reducido): %d\n", acceso);

    return 0;
}