
/*Np. Funcion sin paso de parametros y sin retorno
d.p programa sin paso de paramtreo y sin retorno utilizando if
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

void menorque();
void mayorque()
{
	int n, r;
    printf("Teclea dos cantidades enteros\n");
    scanf("%i%i",&n,&r);
    if(n>r)
        printf("El mayor es: %i ",n);
        system ("pause");
	
}



main()
{
	int rep,opc;
	do{
		p("PROGRAMA SIN RETORNO NI PARAMETROS UTILIZANDO IF");
		p("\n1=determinar cual numero es mayor \n 2=determinar cual es el menor");
		p("Cual opcion deseas?\n");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: mayorque(); break;
			case 2: menorque(); break;
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
	}while(rep==1);
}
void menorque()
{
	int n, r;
    printf("Teclea dos cantidades enteros\n");
    scanf("%i%i",&n,&r);
    if(n>r)
    
    { 
	printf("El mayor es: %i ",n);
	}
	if(n<r)
	{
		printf("El menor es: %i",n);
	}
       
        
        system ("pause");
}
