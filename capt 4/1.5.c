// incluir libreria
#include <stdio.h>

    //incluir funcion principal
    void main(void)
    {

 // declaracion de varible
        int i=5, j = 7, k = 3, m1;
        float x = 2.5, z = 1.8, t;

        // indicacion de opracion
        m1 = ((j % k) /2) + 1;
        m1 += i;
        m1 %= --i;
        // impresion en pantalla vañpr de ml
        printf ("\nEl valor de m1 es: %d", m1);

        // opracion logica
        t = ((float) (j % k) / 2);
        t ++;
        x *= ++z;
        t -= (x += ++i);
        // imprimir en pantalla
        printf("\nEl valor de t es: %.2f”, t");
