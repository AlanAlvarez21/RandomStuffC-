/* NP. Alan Daniel Alvarez Castro
Np. Funcion sin paso de parametros y sin retorno
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

void suma();
void resta();
void multiplicacion()
{
	int x,y,z;

	p("Tecea dos numeros enteros\n");
	s("%i%i",&x,&y);
	z=x*y;
	
}

void division()
{
	int a,b;
	
	p("Tecea dos numeros enteros\n");
	s("%i%i",&a,&b);
		p("Division de %i / %i= %i",a,b,a/b);
}

main()
{
	int rep,opc;
	do{
		
		p("1=suma\n 2=Resta\n 3=Multiplicacion\n 4=Division\n");
		p("Cual opcion deseas?\n");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: suma(); break;
			case 2: resta(); break;
			case 3: multiplicacion(); break;
			case 4: division(); break;
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
	}while(rep==1);
}
void suma()
{
	int repe,q,r;
	p("Tecea dos numeros enteros\n");
	s("%i%i",&q,&r);
	p("La suma de %i+ %i= %i",q,r,q+r);
}
void resta()
{
	int repe,l,ll;
	p("Tecea dos numeros enteros\n");
	s("%i%i",&l,&ll);
	
	p("%i-%i=%i",l,ll,l-ll);
}
