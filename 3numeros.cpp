/*
N.p Alan Daniel Alvarez Castro 
N.p introducir 3 números
F: 09/04/0216

 */

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf
main()
{
	char z;
	int dia, mes,ano,opc,r=0,y,x,i=0,a=0,n;
	do
	{
	p("Ingresa el numero\n");
    s("%i",&n);
	p("\n¿Con que ciclo lo quieres utilizar?\n");
	p("\n1)for 2)while 3)do while\n");
	s("%i",&opc);
	system("cls");
	switch (opc)
	{
	        
       case 1: 
	for(i=0;i<=n;i++)
	   {
       	p("%i+",i);
       	a=a+i;
       	
       }
       p("=%i",a);
	                 break; 
	
	
	case 2: i=0; a=0;
	while(i<=n)
	   {
	   	p("%i+",i);
       	a=a+i;
	   	i++;
	   }
	   p("=%i",a);
	                 break;
	   case 3:i=0; a=0;
	do
	   {
	   	p("%i+",i);
       	a=a+i;
	   	i++;
	   }while(i<=n);
	   p("=%i",a);
	break;
		
	   
	   default: p("No existe");		 
	}
	p("repetir el programa?\n 0 = si       1 = no :");
	s("%i",&y);
	}
	while(r==y);
	system("pause");
	return 0;
}

