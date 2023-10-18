 #include <stdio.h

 /* Lluvias.
El programa, al recibir como dato un arreglo tridimensional que contiene
 informaci�n sobre lluvias, genera informaci�n estad�stica. */

 const intPRO = 24;
 const intMES = 12;
 const intA�O = 10;
 voidLectura(float[PRO][MES][A�O], int, int, int);
 voidFuncion1(float[PRO][MES][A�O], int, int,int);
 voidFuncion2(float[PRO][MES][A�O], int,int,int);  /* Prototipos de funciones. */
 voidFuncion3(float[PRO][MES][A�O], int, int,int);
 voidmain(void)
 {
 floatLLU[PRO][MES][A�O];
 Lectura(LLU, PRO, MES, A�O);
 Funcion1(LLU, PRO, MES, A�O);
 Funcion2(LLU, PRO, MES, A�O);
 Funcion3(LLU, 18, MES, 5);
 }
 voidLectur (floatA[][MES][A�O], intF, int C, int P)
 /* Esta funci�n se utiliza para leer un arreglo tridimensional de tipo real de
 F filas, C columnas y P planos de profundidad. */
 {
 int K, I, J;
 for(K=0; K<P; K++)
 for(I=0; I<F; I++)
 for (J=0; J<C; J++)
 {
 printf(�A�o: %d\tProvincia: %d\tMes: %d�, K+1, I+1, J+1);
 scanf(�%f�, &A[I][J][K]);
 }
 }
 voidFuncion1(floatA[][MES][A�O],intF, int C, int P)

 /* Esta funci�n se utiliza para localizar la provincia que tuvo el mayor registro
 de precipitaci�n pluvial en los �ltimos 10 a�os. Escribe adem�s el registro
 correspondiente. */

Problemas resueltos 243
 6
 {
 int I, K, J, EMAY = -1;
 floatELLU = -1.0, SUM;
 for (I=0; I<F; I++)
 {
 SUM = 0.0;
 for (K=0; K<P; K++)
 for (J=0; J<C; J++)
 SUM += A[I][J][K];
 SUM /= P * C;
 if (SUM > ELLU)
 {
 ELLU = SUM;
 EMAY = I;
 }
 }
 printf(�\n\nProvincia con mayor registro de lluvias: %d�, EMAY+1);
 printf(�\nRegistro: %.2f�, ELLU);
 }
 voidFuncion2(floatA[][MES][A�O],intF, int C, int P)

 /* Esta funci�n se utiliza para localizar la provincia que tuvo el menor registro
 de lluvias en el �ltimo a�o. Escribe adem�s el registro correspondiente. */
 {
 int I, J, EMEN;
 floatELLU = 1000, SUM;
 for (I=0; I<F; I++)
 {
 SUM = 0;
 for (J=0; J<C; J++)
 SUM += A[I][J][P-1];
 SUM /= C;
 if (SUM < ELLU)
 {
 ELLU = SUM;
 EMEN = I;
 }
 }
 printf(�\n\nProvincia con menor registro anual de lluvias en el �ltimo a�o: %d�,
EMEN+1);
 printf(�\nRegistro anual: %.2f�, ELLU);
 }
 voidFuncion3(floatA[][MES][A�O],intF, int C, int P)

 /* Esta funci�n se utiliza para localizar el mes con mayor registro de lluvias en
 la provincia 18 en el quinto a�o. Escribe adem�s el registro correspondiente. */
 {
 intJ, EMES = -1;
 floatELLU = -1.0
  for (J=0; J<C; J++)
 {
 if (A[F-1][J][P-1] > ELLU)
 {
 ELLU = A[F-1][J][P-1];
 EMES = J;
 }
 }
 printf(�\n\nMes: %d Lluvias: %.2f�, EMES+1, ELLU);
 }
