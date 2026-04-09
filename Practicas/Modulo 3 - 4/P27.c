#include <stdio.h>

int main() {
    int archivo_existe=1;
    int permiso_lectura=1; 
    int archivo_vacio=0;
    
    // -----------------------------------------
    // VERSION ORIGINAL (ANIDADA)
    // -----------------------------------------
    /*
    Problema:
    - Mucha indentación
    - Difícil de leer si crece
    */

    if (archivo_existe) {
        if (permiso_lectura) {
            if (!archivo_vacio) {
                printf("Procesando archivo (original)\n");
            }
        }
    }

    // -----------------------------------------
    // VERSION REDUCIDA (CONDICION UNICA)
    // -----------------------------------------
    /*
    CAMBIOS:
    - Se combinan las condiciones en una sola expresión lógica
    */

    if (archivo_existe && permiso_lectura && !archivo_vacio) {
        printf("Procesando archivo (reducido)\n");
    }

    // -----------------------------------------
    // VERSION PROFESIONAL (GUARD CLAUSES)
    // -----------------------------------------
    /*
    ¿QUE SON GUARD CLAUSES?

    Son condiciones que se colocan al inicio de una función para
    "descartar casos inválidos" rápidamente y salir del flujo.

    En lugar de anidar:
        if (...) {
            if (...) {
                if (...) {
                    ...
                }
            }
        }

    Se hace:
        if (!condicion) return;

    Ventajas:
    - Reduce la indentación
    - Mejora la legibilidad
    - Hace explícitos los casos de error
    - Flujo más claro (primero validas, luego ejecutas)
    
    if (!archivo_existe) {
        // Caso inválido → salir inmediatamente
        return ;
    }

    if (!permiso_lectura) {
        // Caso inválido → salir inmediatamente
        return;
    }

    if (archivo_vacio) {
        // Caso inválido → salir inmediatamente
        return;
    }
    // Si llegó aquí, todo es válido
    printf("Procesando archivo (guard clauses)\n");
    */
    return 0;
}