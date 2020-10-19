/* 
   NP. Funciones con arreglos bi-dimensionales con parametro y sin retorno
   fecha: 23/05/2016 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf


void gastos();
void temperatura(int lista[20])
{
	
	int i ,a,promedio;
    
    
	
		system("cls");
		promedio=a/7;
		p("\nEl promedio  es: %d\n",promedio);	
		p("Dias arriba del promedio: \n");
		for(i=0;i<7;i++)
		if(lista[i]>promedio)
		p("%s  %i\n ",lista[i]);
		
	}


int main ()
{
	
	int opc,repe,a,i,lista[100];
	char nombre[7][12]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
	do{
		
		a=0;
		for(i=0;i<7;i++)
		{
		p("Introduce la temperatura de cada dia inciando por el 1\n");
		s("%i",&lista[i]);
		a=a+lista[i];	
		}
		
	p("1=Temperatura \n2=Gastos semanales\n");
	p("Que opcion deseas?");
	s("%i",&opc);
	switch (opc)
	{
		
		case 1: temperatura(lista[i]);break;
		case 2: gastos();break;
		default:p("No existe opcion\n");

	}
		p("Deseas repetir el preograma?\n 1=si\n2=no\n");
		s("%i",&repe);
     } while(repe==1);
     
	
	return 0;
	
}

void gastos()
{
	int i ,t=100,a,promedio,lista[t];
    char nombre[7][12]={"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};
    
	a=0;
		for(i=0;i<7;i++)
		{
		p("Introduce los gastos del %s:\n",nombre[i]);
		s("%i",&lista[i]);
		a=a+lista[i];	
		}
	
        p("El total de gastos en la semana es de : %d\n",a);
	
}

