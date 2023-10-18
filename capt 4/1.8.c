// incluir libreria
#include <stdio.h>

void main(void)
{

  // declaracion de variable
    float PIE, LIB, MET, KIL;

    // imprimir en pantalla los datos
    printf("Ingrese los datos del objeto: ");
    // introducir el valor
    scanf("%f  %f", &PIE, &LIB);

    MET = PIE * 0.09290;

    KIL = LIB * 0.45359;
    // imprimir en pantalla los datos
    printf("\nDatos del objeto \nLongitud: %5.2f  \t Peso: %5.2f", MET, KIL);

}
