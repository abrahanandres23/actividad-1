
# include <stdio.h>

 /* Suma matrices.
 El programa, al recibir como datos dos arreglos bidimensionales del mismo
 tama�o, calcula la suma de ambos y la almacena en un tercer arreglo
 bidimensional. */

 const intMAX = 50;

 /* Prototipo de funciones. */

 void Lectura(int [][MAX], int, int);
 void Suma(int[][MAX], int[][MAX], int[][MAX], int, int);
 void Imprime(int [][MAX], int, int);
 void main(void)
 {
 intMA[MAX][MAX], MB[MAX][MAX], MC[MAX][MAX];

/* Declaraci�n de los tres arreglos */
 intFIL, COL;
 do
 {
 printf(�Ingrese el n�mero de filas de los arreglos: �);
 scanf(�%d�, &FIL);
 }
 while (FIL> MAX FIL< 1);

/* Se verifica que el n�mero de filas sea correcto. */
 do
 {
 printf(�Ingrese el n�mero de columnas de los arreglos: �);
 scanf(�%d�, &COL);
 }
 while (COL > MAX COL < 1);

/* Se verifica que el n�mero de columnas sea correcto. */

 printf(�\nLectura del Arreglo MA\n�);
 Lectura(MA, FIL, COL);

  printf (�\nLectura del Arreglo MB\n�);
 Lectura (MB, FIL, COL);
 Suma (MA, MB, MC, FIL, COL);
 printf (�\nImpresi�n del Arreglo MC\n�);
 Imprime (MC, FIL, COL);
 }
 voidLectura(int A[][MAX], intF, int C)

 /* La funci�n Lecturase utiliza para leer un arreglo bidimensional entero de F
 filas y Ccolumnas. */

 {
 intI, J;
 for (I=0; I<F; I++)
 for(J=0; J<C; J++)
 {
 printf(�Ingrese el elemento %d %d: �, I+1, J+1);
 scanf(�%d�, &A[I][J]);
 }
 }
 void Suma(intM1[][MAX],intM2[][MAX],intM3[][MAX], intF, int C)

 /* La funci�n Sumase utiliza para sumar los arreglos y almacenar el resultado
 en un tercer arreglo bidimensional. */
 {
 intI, J;
 for (I=0; I<F; I++)
 for (J=0; J<C; J++)
 M3[I][J]= M1[I][J] + M2[I][J];
 }
 voidImprime(int A[][MAX], intF, int C)

 /* La funci�n Imprimese utiliza para escribir un arreglo bidimensional de tipo
 entero de Ffilas y Ccolumnas. */
 {
 intI, J;
 for (I=0; I<F; I++)
 for (J=0; J<C; J++)
 printf(�\nElemento %d %d: %d �, I, J, A[I][J]);
 }
