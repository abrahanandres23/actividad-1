
  #include <stdio.h>

 /* Asigna.
 El programa, al recibir un arreglo bidimensional cuadrado, asigna elementos en
 funci�n del m�dulo (residuo) a un arreglo unidimensional. */

 void Lectura(int [][10], int);
 void Calcula(int [][10], float [], int);
 float Mod0(int [][10], int, int);
 float Mod1(int [][10], int);                    /* Prototipos de funciones. */
 float Mod2(int [][10], int, int);
 void Imprime(float [10], int);
 void main(void)
 {
 int MAT[10][10],TAM;
 float VEC[10];
 do
 {
 printf(�Ingrese el tama�o de la matriz: �);
 scanf(�%d�, &TAM);
 }
 while (TAM >10 TAM < 1);
 Lectura(MAT, TAM);



 Calcula(MAT, VEC, TAM);
 Imprime(VEC, TAM);
 }
 voidLectura(int A[][10], int N)

 /* La funci�n Lecturase utiliza para leer un arreglo bidimensional cuadrado
 de tipo entero. */
 {
 intI, J;
 for(I=0; I<N; I++)
 for(J=0; J<N; J++)
 {
 printf(�Ingrese el elemento %d %d: �, I+1, J+1);
 scanf(�%d�, &A[I][J]);
 }
 }
 voidCalcula(int A[][10],floatB[], int N)

 /* Esta funci�n se utiliza tanto para calcular el m�dulo entre el �ndice del
 arreglo unidimensional y 3, como para llamar a las funciones
 correspondientes para resolver el problema. */
 {
 intI;
 for (I=0; I<N; I++)
 switch(I%3)
 {
 case 1: B[I] = Mod1 (A,I);
 break;
 case 2: B[I] = Mod2 (A,I,N);
 break;
 default: B[I] = Mod0 (A,I,N);
 break;
 }
 }
 floatMod0 (intA[][10],int K,
             }
 }
 floatMod0 (intA[][10],int K, int M)

 /* Esta funci�n calcula el cociente entre una productoria y una sumatoria. */
 {
 intI;
 float PRO = 1.0, SUM  = 0.0;
 for (I=0; I<M; I++)
 {
 PRO *= A[I][K];
 SUM += A[I][K];
 }
 return (PRO / SUM);
 }
 float Mod1(intA[][10], intN)

 /* Esta funci�n obtiene el resultado de una sumatoria. */
 {

  intI;
 floatSUM = 0.0;
 for (I=0; I<=N; I++)
 SUM += A[N][I];
 return (SUM);
 }
 float Mod2 (int A[][10],intN, int M)

 /* Esta funci�n obtiene el resultado de la productoria. */
 {
 intI;
 floatPRO = 1.0;
 for (I=N; I<M; I++)
 PRO *= A[I][N];
 return (PRO);
 }
 voidImprime(floatB[], intN)

 /* Esta funci�n se utiliza para escribir un arreglo unidimensional de tipo
 real de Nelementos. */

 {
 intI;
 for (I=0; I<N; I++)
 printf(�\nElemento %d: %.2f �, I, B[I]);
 }
