/*
N.p Alan Daniel Alvarez Castro 
N.p introducirun numero y el programa te dira uantos digitos tiene
F: 09/04/0216

 */

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf
int main()
{
	int i,n ,a, z,repe;

	do
	{

		p("Ingresa un numero\n");
		s("%i",&n);
		p("\nQue ciclo quieres utilizar?\n\n");
		p("\n1 while 2)do-while 3)For\n");
		s("%i",&z);
		switch(z)
		{	case 1: a=1; i=1;
			while(n/10>0)
			{
				n=n/10;
				i++;
			}
	
			break;
			case 2: a=1;  i=1;
			
			do
			{
			
				i++;
			}
			while(n/10>0);
			
			break;
			case 3: a=1;
			
		     	for(i=1; n/10>0; i++)
			
				a=a*i;
		
			break;

	
				default: printf("no existe opcion");
		}
		p("\n\nEl numero de digitos es: %i\n\n",a);
		p("\n\nQuieres repetir el ciclo? 1= si\n\n");
		s("%i",&repe);
	}
	while(repe=1);
	system("pause");
}
