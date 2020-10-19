/*
N.p Alan Daniel Alvarez Castro 
d.p introducir datos y el programa te dira en que estacion dl año naciste
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
	int dia, mes,ano;
	
	p("1)Ingresa tu nombre completo\n");
	fflush(stdin);gets(nombre);
	system("cls");
	p("2)Ingresa el dia en el que naciste\n");
	s("%i",&dia);
	system("cls");
	p("3)Ingresa el mes en el que naciste\n");
	s("%i",&mes);
	system("cls");
	p("4)Ingresa el ano en el que naciste\n");
	s("%i",&ano);
	system("cls");
	p("%s esta es tu fecha de nacimiento %i/%i/%i ",nombre,dia,mes,ano);
	
	
	
	switch (mes)
	{
	        
       case 1: if (dia<=21) p(" Naciste en Verano\n");
	   break;
	   
	   case 2: p("\nNaciste en Verano\n");
	   break;
	   
	   case 3: if (dia<=21) p("\nNaciste en Verano\n");
		       else p("\nNaciste en primavera\n");
	   break;
		
	   case 4: p("\nNaciste en primavera\n");
	   break;
		
	   case 5: p("\nNaciste en primavera\n");
	   break;	
	   
	   case 6: if (dia<=21) p("\nNaciste en primavera\n");
	           else p("\n Naciste en otono\n");
	   break;
	   
	   case 7: p("\nNaciste en otono\n");
	   break;
	   
	   case 8: p("\nNaciste en otono\n");
	   break;
	   
	   case 9: if (dia<=21) p("\nNaciste en otono\n");
	           else p("\nNaciste en invierno\n");
	   break;	           
		
	   case 10: p("\nNaciste en invierno\n");
	   break;
	   
	   case 11: p("\nNaciste en invierno\n");
	   break;
	   
	   case 12: if (dia<=21) p("\nNaciste en invierno\n"); 
	            else p("Naciste en Verano\n ");
	   break;
	   
	   default: p("\nNo existe\n");		 
	}
	
	system("pause");
    return 0;
}

