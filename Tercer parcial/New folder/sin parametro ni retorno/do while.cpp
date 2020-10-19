/* NP. Alan Daniel Alvarez castro
Np. Funcion sin paso de parametros y sin retorno while
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

void impares();

void numero()
{
	int x,y,z;
   x=1;
   do{
   
	p("Tecea numero\n");
	s("%i",&x);}while(x!=0);
	
	
}



main()
{
	int rep,opc;
	do{
		p("PROGRAMA SIN PASO DE PARAMETRO Y SIN RETORNO (DO WHILE)");
		p("\n 1=numeros impares\n 2=introducir numeros hasta que el numero ntroducido sea 0\n");
		p("Cual opcion deseas?\n");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: impares(); break;
			case 2: numero(); break;
			
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
	}while(rep==1);
}
void impares()
{
	
int i ,a,N1,N2,OP,repe;

printf("entre que numero quieres los impares y su suma:\n");
scanf("%i %i",&N1,&N2);
i=N1;a=0;
	do
	          {
	       	if(i%2!=0)
	       	{
		printf("%i ",i);
		a=a+i;
		}
		i++;
		}
	          while(i<=N2);
printf("\n las suma de los numeros impares entre %i y %i = %i\n",N1,N2,a);				
}
