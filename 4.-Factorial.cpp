/*
N.p Alan Daniel Alvarez Castro 
d.p Realizar el Fctorial de un número 
F: 09/04/0216

 */

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf
int main()
{
	int i,n ,z,repe;
	float a;
	do
	{

		p("Ingresa un numero\n");
		s("%i",&n);
		p("\nQue ciclo quieres utilizar?\n\n");
		p("\n1 while 2)do-while 3)For");
		s("%i",&z);
		switch(z)
		{	case 1: a=1; i=1;
			while(i<=n)
		{
				a*=i;
				i++;
			} 
			break;
			case 2: a=1;
			i=1;
			do
			{
				a*=i;
				i++;
			}
			while(i<=n);
			
			break;
			case 3: a=1;
			
		     	for(i=1; i<=n; i++)
			
				a=a*i;
		
			break;

	
				default: printf("no existe opcion");
		}
		p("\n\nEl numero factorial es: %f\n\n",a);
		p("\n\nQuieres repetir el ciclo? 1= si\n\n");
		s("%i",&repe);
	}
	while(repe=1);
	system("pause");
}
