/* NP. Alan Daniel Alvarez Catro
Np. Funciones con paso de parametros y sin retorno
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

void suma(int,int);
void resta(int,int);
void multiplicacion(int x, int y)
{
	int z;
	z=x*y;
	p("Multiplicacion de %i * %i= %i",x,y,z);
	
}

void division(int a,int b)
{
	p("Division de %i / %i= %i",a,b,a/b);
}

main()
{
	int n,n1,rep,opc;
	do{
		
		p("Teclea dos numeros enteros\n");
		s("%i%i",&n,&n1);
		p("1=suma\n 2=Resta\n 3=Multiplicacion\n 4=Division\n");
		p("Cual opcion deseas?\n");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: suma(n,n1); break;
			case 2: resta(n,n1); break;
			case 3: multiplicacion(n,n1); break;
			case 4: division(n,n1); break;
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
	}while(rep==1);
}
void suma(int q, int r)
{
	int rep; rep=q+r;
	p("La suma de %i+ %i= %i",q,r,rep);
}
void resta(int l, int ll)
{
	p("%i-%i=%i",l,ll,l-ll);
}
