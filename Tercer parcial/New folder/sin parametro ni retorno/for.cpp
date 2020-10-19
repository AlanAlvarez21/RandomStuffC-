
/*Np. 
np Alan Daniel Alvarez Castro 
Funcion sin paso de parametros y sin retorno
d.p programa sin paso de paramtreo y sin retorno utilizando for
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

void factorial();

void suma()
{
	int a,b,r,acu=0;
	p("cuantos numeros desea sumar?");
	s("%i",&r);
	for(a=1;a<=r;a++){
	
	p("Tecea numero %i\n",a);
	s("%i",&b);
	acu = acu + b;
     }
	p("suma %i ",acu);
}

main()
{
	int rep,opc;
	do{
		
		p("\n PROGRAMA SIN PARAMETRO Y SIN RETORNO (FOR)\n ");
		p("Cual opcion deseas?\n 1 -factorial  2- suma de numeros    :");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: factorial(); break;
			case 2: suma(); break;
		
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
		system("CLS");
	}while(rep==1);
}
void factorial()
{  
	int i,n,j,r;
	float a;
	printf("****Programa Factorial*****\n\n\n Introducir un numero:");
	scanf("%i",&n);
	
	a=1;
	for(i=1; i<=n; i++)	a=a*i;
		                    
		printf("\n El factorial de %i es:%.2f\n",n,a);
		
		                    	
		                    	
		                    	
		                    	
		                    	
		                    	
}

