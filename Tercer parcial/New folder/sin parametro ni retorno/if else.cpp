/*Np. Funcion sin paso de parametros y sin retorno
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

void if1();
void if0();

void if0()

{
	  int n, r;
    printf("Teclea dos cantidades enteros\n");
    scanf("%i%i",&n,&r);
    if(n>r)
    
    { 
	printf("El mayor es: %i ",n);
	}
	else
	{
		printf("El mayor es: %i ",n);
	}
       
        
        system ("pause");
}



main()
{
	int rep,opc;
	do{
			p("\n PROGRAMA SIN PARAMETRO Y SIN RETORNO (if else )\n ");
		p("1=mayor que  \n 2=menor que que\n");
		p("Cual opcion deseas?\n");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: if0(); break;
			
		
			case 2: if1(); break;
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
	}while(rep==1);
}



void if1()
{
	 int n, r;
    printf("Teclea dos cantidades enteros\n");
    scanf("%i%i",&n,&r);
    system("cls");
    
    if(n>r)
    { 
	printf("%i es mayor que %i\n ",n,r);
	printf("%i es menor que %i\n ",r,n);
	}
	 
	else
	
	{
	printf("%i es mayor que %i\n ",r,n);
	printf("%i es menor que %i\n ",n,r);
	}
       
        
        system ("pause");
}

