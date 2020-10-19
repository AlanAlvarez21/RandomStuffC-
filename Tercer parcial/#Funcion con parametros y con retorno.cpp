/* n.p Alan Daniel Alvarez Castro 

fecha 23/05/2016

d.p ejemplo funcion con parametro y con retorno 

*/
#include <stdlib.h>
#include <stdio.h>
#define pr printf
#define s scanf

int resultado;
int suma(int, int);
int resta(int, int);
int division(int, int);
int multiplicacion(int x, int y)
{
	int z,resultado;

	z=x*y;
	return resultado=z;
}

int division(int a, int b)
{
	int c;
	
	c=a/b;
	return resultado=c;
}

main ()
{
	int x,y;
	char op,rep,p,q;
	do{
		pr("Teclea 2 numeros");
		s("%i%i",&x,&y);
		pr("MENU\n S o s=suma\n R o r=resta\n M o m=Multiplicacion\n D o d=division\n");
		pr("Que operacion deseas\n");
		fflush(stdin);
		s("%c",&op);
		switch (op)
		{
			
			case 'S': case 's': suma(x,y);
			pr("La suma es= %i", resultado); 
			break;
			
			case 'R':case 'r': resultado = resta(x,y);
			pr("La resta es= %i", resultado);
			break;
			
			case 'M': case 'm': resultado=multiplicacion(x,y);
			pr("La multiplicacion es= %i",resultado);
			break;
			
			case 'D': case 'd': resultado=division(x,y);
			pr("La division es= %i",resultado);
			break;
			default: pr("No existe opcion");
		}
		pr("Deseas repetir el programa s=si");
		fflush(stdin);
		s("%c",&rep);
	}while (rep=='S'|| rep=='s');
}
int suma (int n, int m)
{
	int o;

	o=n+m;
	resultado = o;
}

int resta(int w, int g )
{
	int o;

	o=w-g;
    resultado = o;
}

