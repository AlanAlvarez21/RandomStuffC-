/*
N.p Alan Daniel Alvarez Castro 
N.p ciclos 
F: 09/04/0216

 */


#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

main()
{
	int i, a, n1, n2, op, repe;
	
	do
	{
		system("cls");
		p("Entre que numero quieres los impares y su suma\n");
		s("%i %i",&n1,&n1);
		p("Con que ciclo lo quieres\n 1=for \n2=while \n 3=do while\n");
		s("%i",&op);
		switch (op)
		{
			case 1: a=0;
			for(i=n1; i<=n2; i++)
			if(i%2 !=0)
			{
				p("%i",i);
				a=a+i;
			}
			break;
			
			case 2: i=n1; a=0;
			while (i<=n2)
		{
			if(i%2!=0)
			{
				p("%i",i);
				a=a+i;
			}
			i++;
		}
		break;
		
		case 3: i=n1; a=0;
		do
		{
			if (i%2!=0)
			{
				p("%i",i);
				a=a+i;
			}
			i++;
		}
		while (i<=n2);
		break;
		default: p("\nNo existe ese ciclo\n");
		
	}
	p("La suma de los numeros impares entre %i y %i = %i\n", n1,n2,a);
	p("\n Deseas hacer otro ciclo 1=si");
	s("%i",&repe);
}
while (repe==1);
}
