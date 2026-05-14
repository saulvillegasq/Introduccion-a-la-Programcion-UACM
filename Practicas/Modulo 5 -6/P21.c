#include <stdio.h>

struct Alumno {
    char nombre[30];
    int edad;
    float promedio;
};

int main() {
    struct Alumno grupo[5];
    float suma = 0;
    int mejor = 0;
    int mayorEdad = 0;

    for(int i = 0; i < 5; i++) {
        printf("\nAlumno %d\n", i + 1);

        printf("Nombre: ");
        scanf("%s", grupo[i].nombre);

        printf("Edad: ");
        scanf("%d", &grupo[i].edad);

        printf("Promedio: ");
        scanf("%f", &grupo[i].promedio);

        suma += grupo[i].promedio;

        if(grupo[i].promedio > grupo[mejor].promedio) {
            mejor = i;
        }

        if(grupo[i].edad > grupo[mayorEdad].edad) {
            mayorEdad = i;
        }
    }

    printf("\nPromedio grupal: %.2f\n", suma / 5);

    printf("\nMejor promedio:\n");
    printf("%s con %.2f\n", grupo[mejor].nombre, grupo[mejor].promedio);

    printf("\nAlumno con mayor edad:\n");
    printf("%s con %d anos\n", grupo[mayorEdad].nombre, grupo[mayorEdad].edad);

    return 0;
}