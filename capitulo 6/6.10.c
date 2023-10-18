
 #include <stdio.h>

 /* Cuadrado mágico.
 El programa genera un cuadrado mágico siguiendo los criterios enunciados
 anteriormente. */

 const intMAX = 50;
 voidCuadrado(int[][MAX], int);
 voidImprime(int [][MAX], int);           /* Prototipos de funciones. */
 voidmain(void)
 {
 intCMA[MAX][MAX],TAM;
 do
 {
 printf(”Ingrese el tamaño impar de la matriz: ”);
 scanf(”%d”, &TAM);
 }
 while ((TAM > MAX TAM < 1) && (TAM % 2));

/* Se verifica el tamaño del arreglo y el orden (impar) del mismo. */

 Cuadrado(CMA, TAM);
 Imprime(CMA, TAM);
 }
 voidCuadrado(intA[][MAX],intN)

 /* Esta función se utiliza para formar el cuadrado mágico. */
 {
 intI = 1, FIL = 0, COL = N / 2, NUM = N * N;
 while(I <= NUM)
 {
 A[FIL][COL] = I;
 if (I%N != 0)
 {
 FIL = (FIL – 1 + N) % N;
 COL = (COL + 1) % N;
 }
 else
 FIL++;
 I++;
 }
 }
 voidImprime(int A[][MAX], intN)

 /* Esta función se utiliza para escribir el cuadrado mágico. */
 {
 intI, J;
 for (I=0; I<N; I++)
 for (J=0; J<N; J++)
 printf(”\nElemento %d %d: %d”,I+1, J+1, A[I][J]);
 }
