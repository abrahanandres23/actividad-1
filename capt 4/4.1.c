//incluir libreria
 #include <stdio.h>

 #include <stdio.h>
 /* Conflicto de variables con el mismo nombre. */
 void f1(void);            /* Prototipo de función. */
 int K = 5;               /* Variable global. */
 void main (void)
 {
 int I;
 for (I = 1; I <= 3; I++)
 f1();
 }
 void f1(void)
