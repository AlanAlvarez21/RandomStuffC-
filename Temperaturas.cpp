/*
N.p Alan Daniel Alvarez Castro 
d.p introducir temperaturas de dias de la semana y sacar media, promedio
F: 09/04/0216

 */
#include "stdio.h"
#include "stdlib.h"
#define t 100

main()
{
int i ,a,prom,repe,lista[t],op;
char nombre[7][12]={"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
do
	{
	system("cls");

	printf("Escoja un ciclo para correr el programa: \n 1.For\n 2.While\n 3.Do While\n");
	scanf("%i",&op);
	system ("cls");
        switch(op)
     	{
	    case 1: a=0;
		for(i=0;i<7;i++)
		{
		printf("Introduce la temperatura del %s:\n",nombre[i]);
		scanf("%i",&lista[i]);
		a=a+lista[i];	
		}
		system("cls");
		prom=a/7;
		printf("El promedio de la temperatura es:%d\n",prom);	
		printf("Los dias que estan por arriba de la media son:\n");
		printf("Posicion		Valor\n");
		for(i=0;i<7;i++)
		if(lista[i]>prom)
		printf("%s		%i\n",nombre[i],lista[i]);
		break;
		
	    case 2: i=0; a=0;
		while(i<7)
         		{
	    	printf("Introduce la temperatura del %s:\n",nombre[i]);
		scanf("%i",&lista[i]);
		a=a+lista[i];	
		i++;    		
		}
		system("cls");
		prom=a/7;
		printf("\nEl promedio de la temperatura es: %d\n",prom);	
		printf("\nLos dias que estan por arriba de la media son: \n");
		printf(" Posicion      Valor \n");
		i=0;
		while(i<7)
		{
		if(lista[i]>prom)
		printf("\n   %s      %i\n ",nombre[i],lista[i]);
		i++;
		}
		break;
		
	case 3: i=0; a=0;
	do
	          {
	       	printf("Introduce la temperatura del %s:\n",nombre[i]);
		scanf("%i",&lista[i]);
		a=a+lista[i];	
		i++;    		
		}
		while(i<7);
		system("cls");
		prom=a/7;
		printf("\nEl promedio de la temperatura es: %d\n",prom);	
		printf("\nLos dias que estan por arriba de la media son: \n");
		printf(" Posicion      Valor \n");
		i=0;
		while(i<7)
		{
		if(lista[i]>prom)
		printf("\n   %s      %i\n ",nombre[i],lista[i]);
		i++;
		}
		while(i<7);
	          break;
			   
	default: printf("\n no existe ese ciclo");
	}
printf("\n Deseas hacer otro ciclo: 1 = si ");    
scanf("%i",&repe);
}
while(repe==1);
}
