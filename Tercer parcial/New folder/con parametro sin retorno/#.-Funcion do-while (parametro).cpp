/* 
   NP. Funciones con do-while  con parametro y sin retorno
   fecha: 23/05/2016 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf

void pares(int,int);
void impares(int n1,int n2)
{
	
	int i,a;
	
	
	
	    i=n1;a=0;
		do
        {
	    	if(i%2!=0)
	    	{
    		printf("%i ",i);
    		a=a+i;		    		
		}
		i++;
		}while(i<=n2);
		p("\nLa suma de los impares es: %i\n",a);
}

int main ()
{
	
	int opc,repe,n1,n2;
	do{
	p("entre que numero y que numero quieres la suma:\n");
	scanf("%i %i",&n1,&n2);
	system("cls");
	p("1=Suma de los impares\n2=Suma de los pares\n");
	p("Que opcion deseas?");
	s("%i",&opc);
	switch (opc)
	{
		
		case 1: impares(n1,n2);break;
		case 2: pares(n1,n2);break;
		default:p("No existe opcion\n");

	}
		p("Deseas repetir el preograma?\n 1=si\n2=no\n");
		s("%i",&repe);
     } while(repe==1);
     
	
	return 0;
	
}

void pares(int n1, int n2)
{
	int i,a;
	

	    i=n1;a=0;
		do
        {
	    	if(i%2==0)
	    	{
    		printf("%i ",i);
    		a=a+i;		    		
		}
		i++;
		}while(i<=n2);
		p("\nLa suma de los pares es: %i\n",a);
}

