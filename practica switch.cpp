/*
N.p Alan Daniel Alvarez Castro 
d.p prctica 1 utilizando switch
F: 08/04/0216

 */

#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#define p printf 
#define s scanf
main ()
{
	int x, y ,r;
	
	p("Teclea dos numeros enteros\n");
	s("%i%i",&x,&y);
	p("1=suma\n2=resta\n3=multiplicacion\n4=division de cociente\n5=Division de residuo");
	p("Que operacion desea\n");
	s("%i",&r);
	
	switch(r)
	
{
    	case 1:	printf("\nsuma de %i+%i=%i\n",x,y, x+y);
	
	break;
	
	     case 2:	printf("\nresta de %i-%i\n",x,y, x-y);
	
	break;
	
		case 3:printf("\nmultiplicacion de %i*%i=%i\n",x,y, x*y);
	
	break;
	
		case 4:printf("\nDivision de cociente  de %i/%i=%i\n",x,y, x/y);
	
	break;
	
	case 5:printf("\nDivision de residuo  de %i %% %i=%i\n",x,y, x%y);
	
	break;
	default: printf("\nNo existe esa operacion");
}

system ("pause");
	    
}


