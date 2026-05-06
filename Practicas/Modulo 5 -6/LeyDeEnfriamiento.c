#include <stdio.h>

void simularIterativo(double T,double Ta, double k ,int pasos);
double simularRecursivo(double T,double Ta, double k ,int pasos);
void graficarTemperatura(double T);
void actualizarTemp(double *T,double Ta, double k);

int main (){
    double T, Ta, k, resultado;
    int pasos,opcion;

    printf("Simulador de enfriamiento\n");

    printf("Temperatura inicial: ");
    scanf("%lf",&T);

    printf("Temperatura ambiente: ");
    scanf("%lf",&Ta);

    printf("Coeficiente k: ");
    scanf("%lf",&k);

    printf("Número de pasos (s): ");
    scanf("%lf",&pasos);

    do{

        printf("\n ---- Menú ---- \n");
        printf("1. Simulacion iterativa\n");
        printf("2. Simulacion recursiva\n");
        printf("3. Exporta a CSV\n");
        printf("4. Salir");

        printf("Opción:");

        scanf("%d",opcion);

        switch (opcion){
        case 1:
            simularIterativo(T,Ta,k,pasos);
            break;
        case 2:
            resultado=simularRecursivo(T,Ta,k,pasos);
            printf("Temperatura final: %.2lf C\n",resultado);
            break;
        case 3:
            exportarCSV(T,Ta,k,pasos);
            break;
        
        case 4:
            printf("fin de programa\n");
            break;
        default:
            printf("Opción no valida\n");
            break;
        }
    } while (opcion != 4);
    
    
}

void simularIterativo(double T,double Ta, double k ,int pasos){
    int i;
    for (i=0; i<=pasos;i++){
        printf("Paso %2d | %6.2lf C |",i,T);
        graficarTemperatura(T);
        actualizarTemp(&T,Ta,k);
    }
}

double simularRecursivo(double T,double Ta, double k ,int pasos){

}
