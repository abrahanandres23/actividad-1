
 #include <stdio.h>
 /* Traspuesta.
 El programa calcula la traspuesta de una matriz. */

 const intMAX = 50;
 voidLectura(int [][MAX], int, int);
 voidTraspuesta(int[][MAX],int [][MAX], int, int);  /* Prototipos de funciones. */
 voidImprime(int [][MAX], int, int);
 voidmain(void)
 {
      intMAT[MAX][MAX], TRA[MAX][MAX];
 intFIL, COL;
 do
 {
 printf(”Ingrese el número de filas de la matriz: ”);
 scanf(”%d”, &FIL);
 }
 while (FIL > MAX FIL < 1);
 /* Se verifica que el número de filas sea correcto. */
 do
 {
 printf(”Ingrese el número de columnas de la matriz: ”);
 scanf(”%d”, &COL);
 }
 while (COL > MAX COL < 1);
 /* Se verifica que el número de columnas sea correcto. */
 Lectura(MAT, FIL, COL);
 Traspuesta(MAT, TRA, FIL, COL);
 Imprime(TRA, COL, FIL);
 }
 voidLectura(int A[][MAX], intF, int C)
 /* Esta función se utiliza para una matriz de tipo entero de F filas y C
 ➥columnas. */
 {
 intI, J;
 for (I=0; I<F; I++)
 for(J=0; J<C; J++)
 {
 printf(”Ingrese el elemento %d %d: ”, I+1, J+1);
 scanf(”%d”, &A[I][J]);
 }
 }
 voidTraspuesta(intM1[][MAX],intM2[][MAX],intF, int C)
 /* Esta función se utiliza para calcular la traspuesta. */
 {
 int I, J;
 for (I=0; I< F; I++)
 for (J=0; J<C; J++)
 M2[J][I] = M1[I][J];
 }
 voidImprime(int A[][MAX], intF, int C)
 /* Esta función se utiliza para escribir una matriz de tipo entero de Ffilas
 ➥y Ccolumnas —en este caso la traspuesta. */
 {
 intI, J;
 for (I=0; I<F; I++)
 for (J=0; J<C; J++)
 printf(”\nElemento %d %d: %d ”, I+1, J+1, A[I][J]);


 }
