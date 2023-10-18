
 #include <stdio.h>

 /* Cuadrado m�gico.
 El programa genera un cuadrado m�gico siguiendo los criterios enunciados
 anteriormente. */

 const intMAX = 50;
 voidCuadrado(int[][MAX], int);
 voidImprime(int [][MAX], int);           /* Prototipos de funciones. */
 voidmain(void)
 {
 intCMA[MAX][MAX],TAM;
 do
 {
 printf(�Ingrese el tama�o impar de la matriz: �);
 scanf(�%d�, &TAM);
 }
 while ((TAM > MAX TAM < 1) && (TAM % 2));

/* Se verifica el tama�o del arreglo y el orden (impar) del mismo. */

 Cuadrado(CMA, TAM);
 Imprime(CMA, TAM);
 }
 voidCuadrado(intA[][MAX],intN)

 /* Esta funci�n se utiliza para formar el cuadrado m�gico. */
 {
 intI = 1, FIL = 0, COL = N / 2, NUM = N * N;
 while(I <= NUM)
 {
 A[FIL][COL] = I;
 if (I%N != 0)
 {
 FIL = (FIL � 1 + N) % N;
 COL = (COL + 1) % N;
 }
 else
 FIL++;
 I++;
 }
 }
 voidImprime(int A[][MAX], intN)

 /* Esta funci�n se utiliza para escribir el cuadrado m�gico. */
 {
 intI, J;
 for (I=0; I<N; I++)
 for (J=0; J<N; J++)
 printf(�\nElemento %d %d: %d�,I+1, J+1, A[I][J]);
 }
