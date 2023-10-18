
 #include <stdio.h>
 /*el programa , al recibir como datto una matriz de tipo entero escribe
 la diagonal principal*/

 const int TAM = 10;

  void Lectura (int [][TAM],int); /* prorotipo de funciones.*/
  void Imprime (int [][TAM],int);
  /*obseva que siempre es necesario declara el numer de columnas, si no o haces , el compilador marcara
  de sintexis*/

  void main (void)
  {
      int MAT [TAM][TAM];
      lectura (MAT , TAM);
      IMPRIME (MAT, TAM);
  }

  void lecttura (int A [TAM], int F )
  /* la funsion lectura se utiliza para leer un arrglo bidimencional. observa que solo se debe
  pasar como parametro el numero de filas ya que la matriz es cuadrada.*/
  {
      int I, J;
      for (I=0;  I<F;  I++)
          for (J=0; J<F; J ++ )

      {
          print ("Ingrese el elemento %d %d", I+1, J+1);
          scanf ("%d", &A[I][J]);
      }
      }
      void imrpime  (int A[] [TAM], int F )
      /*la funcion imprime se utiliza para escibir un arreglo
      bidimencional cuadrado f y columnas.*/
      {
          int I,j;
          for (I=0;) I<F; I++)

          for (J=0; J<TAM; J++)
            if (I==J)
            printf ("\ndiagonal %d %d: %d",I,J, A [I][J]);


      }
