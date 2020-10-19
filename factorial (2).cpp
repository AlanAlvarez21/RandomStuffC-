/*
N.p Alan Daniel Alvarez Castro 
N.p factorial
d.p realizar el factorial de un número introsucido por el usuario
F: 09/04/0216

 */


#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf
int main()
{
	int i,a,n,z,repe;
	do
	{

		p("Ingresa un numero\n");
		s("%i",&n);
		p("Que ciclo quieres utilizar?\n");
		p("\n1)")
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

	
				default: printf("no existe ese ciclo");
		}
		p("la mutiplicacion del numero factorial es %i\n",a);
		p("deseas hacer otro ciclo 1= si");
		s("%i",&repe);
	}
	while(repe=1);
	system("pause");
}
