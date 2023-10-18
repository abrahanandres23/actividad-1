 #include <stdio.h>
 /* Simétrico.
 El programa, al recibir como dato un arreglo bidimensional cuadrado, determina
 si el mismo es simétrico. */

const intMAX = 100;
 voidLectura(int [][MAX], int);      /** Prototipos de funciones. */
 intSimetrico(int[][MAX], int);
 void main(void)
 {
 intMAT[MAX][MAX], N, RES;
 do
 {
 printf(”Ingrese el tamaño del arreglo: ”);
 scanf(”%d”, &N);
 }
 while (N > MAX N < 1);   /* Se verifica que el tamaño del arreglo sea
 válido. */
 Lectura (MAT, N);
 RES = Simetrico(MAT, N);
 if(RES)
 printf(”\nEl arreglo bidimensional es simétrico”);
 else
 printf(”\nEl arreglo bidimensional no es simétrico”);
 }
 voidLectura(int A[][MAX], int T)
 /* La función Lectura se utiliza para leer un arreglo bidimensional cuadrado de
 tipo entero de Tfilas y Tcolumnas. */
 {
 intI, J;
 for(I=0; I<T; I++)
 for(J=0; J<T; J++)
 {
 printf(”Fila: %d\tColumna: %d”, I+1, J+1);
 scanf(”%d”, &A[I][J]);
 }
 }
 intSimetrico (intA[][MAX], intT)
 /* La función Simétricose utiliza para determinar si el arreglo bidimensional
 ➥cuadrado es simétrico. Si es simétrico regresa 1, en caso contrario, 0.
 ➥Observa que en el segundo ciclo solamente se recorre la matriz triangular
 ➥inferior, sin la diagonal principal. */
{
 intI = 0, J, F = 1;
 while ((I < T) && F)
 {
 J = 0;
 while((J < I) && F)
 if(A[I][J] == A[J][I])
 J++;
 else
 F = 0;
 I++;
 }
 return (F);
 }
