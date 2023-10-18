 #include <stdio.h>

 /* Alumnos.
 El programa, al recibir un arreglo bidimensional que contiene información
 sobre calificaciones de alumnos en cuatro materias diferentes, obtiene
 resultados estadísticos. */
 const intMAX = 50;
 const intEXA = 4;
 voidLectura(float[MAX][EXA], int);
 voidFuncion1(float[MAX][EXA], int);          /* Prototipos de funciones. */
 voidFuncion2(float[MAX][EXA], int);
 voidmain(void)
 {
 intNAL;
 floatALU[MAX][EXA];
 do
 {
 printf(”Ingrese el número de alumnos del grupo: ”);
 scanf(”%d”, &NAL);
 }     /* Se verifica que el número de alumnos del grupo sea válido. */
 while (NAL > MAX || NAL < 1);
Lectura(ALU, NAL);
 Funcion1(ALU, NAL);
 Funcion2(ALU, NAL);
 }
 voidLectura(floatA[][EXA], intN)
 /* La función Lecturase utiliza para leer un arreglo bidimensional de tipo
 real de Nfilas y EXA columnas. */
 {
 intI, J;
 for(I=0; I<N; I++)
 for(J=0; J<EXA; J++)
 {
 printf(”Ingrese la calificación %d del alumno %d: ”, J+1, I+1);
 scanf(”%f”, &A[I][J]);
 }
 }
 voidFuncion1(floatA[][EXA], intT)
 /* Esta función se utiliza para obtener el promedio de cada estudiante. */
 {
 intI, J;
 floatSUM, PRO;
 for(I=0; I<T; I++)
 {
 SUM = 0;
 for(J=0; J<EXA; J++)
 SUM += A[I][J];
 PRO = SUM / EXA;
 printf(”\nEl promedio del alumno %d es: %5.2f”, I+1, PRO);
 }
 }
 voidFuncion2(floatA[][EXA], int T)
 /* Esta función se utiliza tanto para obtener el promedio de cada examen, así
 como también el examen que obtuvo el promedio más alto. */
 {
 intI, J, MAY;
 floatSUM, PRO, MPRO = 0;
 printf(”\n”);
 for(J=0; J<EXA; J++)
 {
 SUM = 0;
 for(I=0; I<T; I++)
 SUM += A[I][J];
 PRO = SUM / T;
 if(PRO > MPRO)
 {
 MPRO = PRO;
 MAY = J;
 }
 printf(”\nEl promedio del examen %d es: %f”, J+1, PRO);
 }
 printf(”\n\nEl examen con mayor promedio es: %d \t Promedio: %5.2f”, MAY+1,
 MPRO);
 }
