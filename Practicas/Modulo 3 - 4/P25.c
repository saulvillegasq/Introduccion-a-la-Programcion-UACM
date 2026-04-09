#include <stdio.h>

int main() {

    int usuario_activo = 1;
    int usuario_logueado = 0;
    int usuario_admin = 1;
    int baneado = 0;

    int acceso = 0;

    // -----------------------------
    // VERSION ORIGINAL (REDUNDANTE)
    // -----------------------------
    if ((usuario_activo && usuario_logueado && !baneado) ||
        (usuario_activo && usuario_admin && !baneado)) {
        acceso = 1;
    }

    printf("Acceso (original): %d\n", acceso);

    // Reiniciamos
    acceso = 0;

    // -----------------------------
    // VERSION REDUCIDA
    // -----------------------------
    /*
    CAMBIOS:
    1. Se detecta que "usuario_activo" y "!baneado" se repiten en todos los términos.
    2. Se factorizan (álgebra booleana).
    3. Se agrupan las condiciones variables con OR.
    */

    if (usuario_activo && !baneado &&
        (usuario_logueado || usuario_admin)) {
        acceso = 1;
    }

    printf("Acceso (reducido): %d\n", acceso);

    return 0;
}