//incluir libreria

 #include <stdio.h>
 /* Prueba de parámetros por referencia.  */
 vvooiiddf1(iinntt  *);
 /* Prototipo de función. El parámetro es de tipo entero y por referencia
 —observa el uso del operador de indirección. */
 vvooiidd  main(vvooiidd)
 {
 iinnttI, K = 4;
 ffoorr(I = 1; I <= 3; I++)
 {
 printf(“\n\nValor de K antes de llamar a la función: %d”, ++K);
 printf(“\nValor de K después de llamar a la función: %d”, f1(&K));
 /* Llamada a la función ff11. Se pasa la dirección de la variableKK,
 ➥por medio del operador de dirección: &&.  */
}
 }
 vvooiiddf1(iinntt  *R))
//* La función ff11recibe un parámetro por referencia. Cada vez que el
 parámetro se utiliza en la función debe ir precedido por el operador de
 indirección. */
 {
 *R += *R;
 }
