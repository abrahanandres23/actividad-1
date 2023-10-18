 #include <stdio.h>
 /* Combinación de variables globales y locales, y parámetros por valor
 ➥y por referencia. */
 iinntta, b, c, d;               /* Variables globales. */
 vvooiiddfuncion1(iinntt*, iinntt*);
 /* Prototipo de función. Observa que los dos parámetros son por
 ➥referencia. */
 iinnttfuncion2(iinntt, iinntt*);
 /* En este prototipo el primer parámetro es por valor y el segundo por
 ➥referencia. */
 vvooiiddmain(vvooiidd)
 {
 iinntta;      /*  Nota que aaes una variable local. */
 a = 1;      /*  Se asigna un valor a la variable local aa. */
 b = 2;      /*  Se asignan valores a las variables globales bb,,  ccy dd. */
 c = 3;
 d = 4;
 printf(“\n%d %d %d %d”, a, b, c, d);
 funcion1 (&b, &c);
 printf(“\n%d %d %d %d”, a, b, c, d);
 a = funcion2(c, &d);
 printf(“\n%d %d %d %d”, a, b, c, d);
 }
 vvooiiddfuncion1(iinntt*b, iinntt*c)
 {
 iinnttd;
 a = 5;      /*  Observa que se hace referencia a la variable global aa.*/
 d = 3;      /*  Nota que se hace referencia a la variable local dd.  */
 (*b)++;
 (*c) += 2;
 printf(“\n%d %d %d %d”, a, *b, *c, d);
 }
 iinnttfuncion2(iinnttc, iinntt*d)
 {
 iinnttb;
 a++;
 b = 7;
 c += 3;
 (*d) += 2;
 printf(“\n%d %d %d %d”, a, b, c, *d);
 rreettuurrnn(c);
 }
