/* 
   NP. Funciones con arreglos unidimensionales sin parametro y sin retorno
   fecha: 23/05/2016 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

void suma();
void lista()
{
	int t=100,i,a, prom, lista[t],ne,z;
	
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

int main ()
{
	
	int opc,repe;
	do{
	p("1=Lista \n2=Multiplicacion de valores de la lista\n");
	p("Que opcion deseas?");
	s("%i",&opc);
	switch (opc)
	{
		
		case 1: lista();break;
		case 2: suma();break;
		default:p("No existe opcion\n");

	}
		p("Deseas repetir el preograma?\n 1=si\n2=no\n");
		s("%i",&repe);
     } while(repe==1);
     
	
	return 0;
	
}

void suma()
{
	int t=100,i,a, suma, lista[t],ne,z;
	
	p("Cuantos elementos quieres en la lista maximo 100\n");
	s("%i",&ne);
    
	a=0;
	
	for(i=0;i<ne;i++)
	{
		p("Teclea elementos de tu lista[%i]",i);
		s("%i",&lista[i]);
		a=a+lista[i];
	}
	
	p("La suma de los elementos es: %d\n",a);
	
}

