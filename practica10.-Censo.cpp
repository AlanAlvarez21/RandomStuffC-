
/*
N.p Alan Daniel Alvarez Castro 
d.p introducir la cantidad de mujeres y de hombres que hay en una poblacion de 80 
F: 09/04/0216

 */

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

main()
{
	int x,y,z,a,b,c,d,e,f,g,h,i,j,k;
	p("Ingresa la cantidad de mujeres\n");
	s("%i",&x);
	p("Ingresa sus edades\n");
	s("%i%i%i%i%i%i",&a,&b,&c,&d,&e,&f);
	p("Ingresa la cantidad de hombres\n");
	s("%i",&y);
	p("Ingresa sus edades\n");
	s("%i%i%i%i%i",&g,&h,&i,&j,&k);
	p("La cantidades de mujeres son: %i y sus edades son %i %i %i %i %i %i",x,a,b,c,d,e,f);
	p("La cantidad de hombres son:%i y sus edades son %i %i %i %i %i",y,g,h,i,j,k);
	system("pause");
}

