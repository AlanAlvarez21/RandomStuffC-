
/*
N.p Alan Daniel Alvarez Castro 
N.p introducir 3 números
F: 09/04/0216
lea numeros enteros indefinidamente sumarlos y calcular su media de todos ellos hasta que se introduzca 0*/
#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf
int main()
{
	int i,a, x, z,repe;
	long long n;
	

	do
	{

		p("Ingresa un numero\n");
		s("%lld",&n);
		p("\nQue ciclo quieres utilizar?\n\n");
		p("\n1 while 2)do-while 3)For\n");
		s("%i",&z);
		switch(z)
		{	case 1: a=1; i=1;
			while (i<=n)
	   {
	   	p("%i+",i);
       	a=a+i;
       	i=a/1;
	   	i++;
	   }
	 
			case 2: a=1;  i=1;
			
			do
			{
			    n=n/10;
				i++;
			}
			while(n/10>0);
			
			break;
			case 3: a=1;
			
		     	for(i=1; n/10>0; i++)
			
				n=n/10;
		
			break;

	
				default: printf("no existe opcion");
		}
		p("\n\nLa media es%lld\n\n",i);
		p("\n\nQuieres repetir el ciclo? 1= si\n\n");
		s("%i",&repe);
	}
	while(repe==1);
	system("pause");
	
	
}
