
#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

void condicion_1(int,int);
void condicion_2(int x,int y)
{
	


	if(x>y) 
	{
	p("El numero %i es mayor que %i\n",x,y);
	p("El numero %i es menor que %i\n",y,x);
	}
}

int main ()
{
	
	int opc,repe,x,y;
	do{
		
	p("Ingresa dos numeros enteros\n");
	s("%i%i",&x,&y);
	p("1=Condicion_1\n2=condicion_2\n");
	p("Que opcion deseas?");
	s("%i",&opc);
	switch (opc)
	{
		
		case 1: condicion_1(x,y);break;
		case 2: condicion_2(x,y);break;
		default:p("No existe opcion\n");

	}
		p("Deseas repetir el preograma?\n 1=si\n2=no\n");
		s("%i",&repe);
     } while(repe==1);
     
	system("pause");
	return 0;
	
}

void condicion_1(int a, int b)
{
	

	if(a<b) 
	{
	p("El numero %i es mayor que %i\n",b,a);
	p("El numero %i es menor que %i\n",a,b);
	
	}
}
