/*

N.p Alan Daniel Alvarez Castro 
N.p arreglo lista de numeros 
F: 09/04/0216




*/
#include"stdio.h"
#include"stdlib.h"
#define t 100
#define y 100
#define x 100
int main()
{
	int i,a,prom,lista[t],lista2[y],ne,OP,repe;
	do
	{
		system("cls");
		printf("Cuantos elementos quieres en cada lista, max 100:\n");
		scanf("%i",&ne);
		printf("con que ciclo lo quiere \n 1=for\n 2=while\n 3=do while\n");
		scanf("%i",&OP);		
		switch(OP)
		{
			case 1: a=0;
			for(i=0;i<ne;i++)			
			{
				printf("Introduce el elemento de la lista1[%i] \n",i);
				scanf("%i",&lista[i]);							
			}
			for(i=0;i<ne;i++)			
			{
				printf("Introduce el elemento de la lista2[%i] \n",i);
				scanf("%i",&lista2[i]);						
			}			
			printf("Lista1:  Lista2:   Lista3: \n");
			for(i=0;i<ne;i++)							
			printf("  %i       %i        %i \n",lista[i],lista2[i],lista[i]+lista2[i]);
			
			break;		     
			 case 2: 
			 i=0;
			 a=0;
		     while(i<ne)
		    {
		    	printf("Introduce el elemento de la lista1[%i] \n",i);
				scanf("%i",&lista[i]);					
				i++;
			}
			i=0;
			a=0;
		     while(i<ne)
		    {
		    	printf("Introduce el elemento de la lista2[%i] \n",i);
				scanf("%i",&lista2[i]);					
				i++;
			}
			printf("Lista1:  Lista2:   Lista3: \n");			
			i=0;
			a=0;
			while(i<ne)
			{				
				printf("  %i       %i        %i \n",lista[i],lista2[i],lista[i]+lista2[i]);
				i++;
			}
		       break;
			   case 3: 
			i=0;
			a=0;
		     do
		    {
		    	printf("Introduce el elemento de la lista1[%i] \n",i);
				scanf("%i",&lista[i]);					
				i++;
			}
			while(i<ne);
			i=0;
			a=0;
		    do
		    {
		    	printf("Introduce el elemento de la lista2[%i] \n",i);
				scanf("%i",&lista2[i]);					
				i++;
			}
			while(i<ne);
			printf("Lista1:  Lista2:   Lista3: \n");			
			i=0;
			a=0;
			do
			{				
				printf("  %i       %i        %i \n",lista[i],lista2[i],lista[i]+lista2[i]);
				i++;
			}  
			  while(i<ne);
			   break;
			   
			   default: printf("\n no existe ese ciclo");
			   }
			   
			    printf("\n deseas hacer otro ciclo 1. si ");    
			    scanf("%i",&repe);
	}
	
	while(repe==1);
}
