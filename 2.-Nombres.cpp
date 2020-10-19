/*
N.p Alan Daniel Alvarez Castro 
N.p nombres
d.p ingresar un numero indeterminado de usuarios 
F: 09/04/0216

 */


#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf
main()
{
	char nombre[50];
	char z;
	int dia, mes,ano,opc,r=0,y,x,i=0;
	do
	{
	p("Ingresa el nombre\n");
	fflush(stdin);gets(nombre);
	p("Ingresa las veces que quieres que se imprima\n");
	s("%i",&x);	
	p("\n¿Con que ciclo lo quieres utilizar?\n");
	p("\n1)for 2)while 3)do while\n");
	s("%i",&opc);
	system("cls");
	switch (opc)
	{
	        
       case 1: 
	for(i=1;i<=x;i++)
       	puts(nombre);

	                 break; 
	   case 2: i=1;
	while(i<=x)
	   {
	   	puts(nombre);
	   	i++;
	   }
	                 break;
	   case 3:i=1;
     do
	   {
	   	puts(nombre);
	   	i++;
	   }while(i<=x);
	                 break;
		
	   
	   default: p("No existe");		 
	}
	p("repetir el programa?\n 0 = si       1 = no :");
	s("%i",&y);
	}while(r==y);
	system("pause");
	return 0;
}
