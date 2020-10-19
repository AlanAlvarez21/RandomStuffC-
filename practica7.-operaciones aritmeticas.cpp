/*
N.p Alan Daniel Alvarez Castro 
d.p operaciones aritmeticas con switch
F: 09/04/0216

 */

#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#define p printf 
#define s scanf
main ()
{
	
    char z;
	int x, y ,r;
	
	printf("Teclea dos numeros enteros\n");
	scanf("%i%i",&x,&y);
	printf("A=suma\nB=resta\nC=multiplicacion\nD=division de cociente\nE=Division de residuo");
	printf("Que operacion desea\n");
	fflush:scanf("%c",&z);
	
	switch(r)
	
{
    	case 'A': case 'a':	printf("\nsuma de %i+%i=%i\n",x,y, x+y);
	
	break;
	
	     case 'B': case'b':	printf("\nresta de %i-%i\n",x,y, x-y);
	
	break;
	
		case 'C': case 'c':	printf("\nmultiplicacion de %i*%i=%i\n",x,y, x*y);
	
	break;
	
		case 'D': case 'd':	printf("\nDivision de cociente  de %i/%i=%i\n",x,y, x/y);
	
	break;
	
	case 'E': case 'e':	printf("\nDivision de residuo  de %i %% %i=%i\n",x,y, x%y);
	
	break;
	default: printf("\nNo existe esa operacion");
}

system ("pause");
	    
}

