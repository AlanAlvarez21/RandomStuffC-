/* NP. Alan Daniel Alvarez castro
Np. Funcion sin paso de parametros y sin retorno
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf
#define t 100

void alumnos()

{
	int i,a, prom, lista[t],ne,z;
	
	p("Cuantos elementos quieres en la lista maximo 100\n");
	s("%i",&ne);
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
	
}

void dias()
{
	
int i ,a,prom,repe,lista[t],op;
char nombre[7][12]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
	for(i=0;i<7;i++)
		{
		printf("Introduce la temperatura del %s:\n",nombre[i]);
		scanf("%i",&lista[i]);
		a=a+lista[i];	
		}
		system("cls");
		prom=a/7;
		printf("\nEl promedio de la temperatura es: %d\n",prom);	
		printf("\nLos dias que estan por arriba de la media son: \n");
		printf(" Posicion      Valor \n");
		for(i=0;i<7;i++)
		if(lista[i]>prom)
		printf("\n   %s      %i\n ",nombre[i],lista[i]);
}

main()
{
	int rep,opc;
	do{
		p("PRGRAMA SIN PASO DE PARAMETRO Y SIN RETORNO (ARREGLO UNIDIMENSINAL)");
		p("\n1=alumnos\n 2=promedio C° semana\n ");
		p("Cual opcion deseas?\n");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: alumnos(); break;
			case 2: dias(); break;
		
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
	}while(rep==1);
}

