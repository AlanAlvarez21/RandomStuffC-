/*
N.p Alan Daniel Alvarez Castro 
d.p introducir un arregl de numeros y sacar los que estan arriba de la media 
F: 09/04/0216

 */

#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define p printf
#define s scanf
#define t 100
main()
{
	int i,a, prom, lista[t],ne,z;
	p("Cuantos elementos quieres en la lista maximo 100\n");
	s("%i",&ne);
	p("\nCon que ciclo lo quieres realizar?\n");
	p("1)For\n2)While\n3)Do-while\n");
	s("%i",&z);
	
	switch (z)
	{
		case 1: 
	a=0;
	
	for(i=0;i<ne;i++)
	{
		p("Teclea elementos de tu lista[%i]",i);
		s("%i",&lista[i]);
		a=a+lista[i];
	}
	prom=a/ne;
	p("El promedio de la lista es: %d\n",prom);
	p("Los elementos que se encuentran arriba de la media son:\n");
	p("Posicion       valor\n");
	
	for (i=0;i<ne;i++)
	if(lista[i]>prom)
	p("%i    %i\n",i,lista[i]);
	break;
	
	   case 2:
	   	 i=0;
	
	
	
	while (i<ne)
	i++;
	
	if(lista[i]>prom)
	p("%i    %i\n",i,lista[i]);
	break;
}
	system("pause");
}
