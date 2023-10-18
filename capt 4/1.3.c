// incluir libreria
#include <stdio.h>

// funcion principal
void main (void)

{

    // declarar variable entera
     int CLA;
     // declarar variable tipo decimal
    float SU1, SU2, SU3, SU4, SU5, SU6, ING, PRO;

    //imprir en pantalla y introducir dactos del sueldo
    printf("ingrese la clave del empleado y los 6 sueldos: \n");
    scantf ("%d %f %f %f%f %f %f " , &CLA,&SU1, &SU2, &SU3, &SU4, &SU5, &SU6);

    // operacion matematica en ejecucion

    ING = ¨(SU1 + SU2 + SU3 + SU4 + SU5 + SU6 );
    PRO = ING /6;

    // imprimir datos promedio
    printf ("\n %d %5.2f %5.2f , CLA, ING, PRO ");

}
