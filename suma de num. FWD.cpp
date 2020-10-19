/*
N.p Alan Daniel Alvarez Castro 
d.p suma de numeros introducidos 
F: 09/04/0216

 */
#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

main ()
{
 	int i,op,rep,n,ac;
    do
    {
    system ("cls");
    puts("\nIntroduce el numero a sumar por favor: ");
    s("%i", &n);
    p("Con que ciclo lo quieres:\n 1= for\n 2= while \n 3= do while\n");
    s("%i",&op);
    switch (op)
    {
	case 1: ac=0;
	for(i=0;i<=n;i++)
	{
	p("\n %i",i);
	ac=ac+i; 
	}
	break;
	
	case 2: i=0; ac=0;
	while (i<=n)
	{
	p("\n %i",i); 
	ac=ac+i; 
	i++;
	}	
	break;
	
	case 3: i=0; ac=0;
	do   
          {
	p("\n %i",i); 
	ac=ac+i; 
	i++;
	}
          while (i<=n);
	break;
	
	default: p("\n No existe ese ciclo"); }
	p("\nLa suma del numero introduciso es de: %i\n",ac);
	p("\nDeseas hacer otro ciclo :) 1 = si");
	s("%i ",&rep);
	}
	while (rep==1);
	}

