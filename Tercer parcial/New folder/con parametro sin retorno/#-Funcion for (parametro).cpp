/* 
   NP. Funciones con for con parametro y sin retorno
   fecha: 23/05/2016 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf
int resultado;

int factorial1(); // sin retorno sin parametro 
 

void factorial(int x ); // con retorno sin parametro 
void factorial0();  //sin parametro con retorno 

void factorial0() // sin parametro con retorno 
{
	
	
}

int long factorial5(int x);

int long factorialcrcp()
{   
    int x,i;

	p("Ingresa el numero para realizar factorial\n");
	s("%i",&x);
	i=1; a=1;
	for(i=1; i<=x; i++)
			{	a=a*i;
			
			}
			return resultado=a;
			
				
				
}

 int main ()
{
	
	int a,opc,x,y,f,repe,n=0,o=0,u;
	do{
    
	system("cls");
    p("PROGRAMA CON LAS 4 FUNCIONES REALIZANDO EL FACTORIAL DE UN NUMERO\n");
	p("1=funcion sin parametro y sin retorno\n2=funcion sin parametro y con retorno\n2=funcion con parametro y sin retorno\n2=funcion con parametro y con retorno\n");
	p("Que opcion deseas?");
	s("%i",&opc);
	system("cls");
   	p("Ingresa el numero para realizar factorial\n");
	s("%i",&n);
	switch (opc)
	{
		
	    case 1: factorial1();break;//sin pase de parametro y sin retorno
		case 2: factorial(f);break;// con pase de parametro y sin retorno
		case 3: factorialcrcp();
        	p("El factorial  es: %li\n", resultado);break;
		
		
		case 4: p("Ingresa el numero para realizar factorial\n");
                s("%i",&x);
	            factorial5(x);
	            	p("El factorial  es: %li\n", a);
	            break;
		
		
		default:p("No existe opcion\n");

	}
		p("Deseas repetir el preograma?\n 1=si\n2=no\n");
		s("%i",&repe);
     } while(repe==1);
     
	
	return 0;
	
}


int long factorial5(int x)
{
    int i;
	
	i=1; a=1;
	for(i=1; i<=x; i++)
			{	a=a*i;
			
			}
			
				return  resultado=a;
	
}


void factorial(int f) // con parametro sin retorno 
{
	
	int a,i;

	i=1; a=1;
	for(i=1; i<=f; i++)
			{	a=a*i;
			
			}
			
				p("El factorial de %i es: %i\n",f,a);
	
}


void factorial1()// sin retorno sin parametro 
{
	int i,j,r,pop;
	float a;
	printf("****Programa Factorial*****\n\n\n :");
	p("Ingresa el numero para realizar factorial\n");
	s("%i",&pop);
	a=1;
	for(i=1; i<=pop; i++)	a=a*i;
		                    
		printf("\n El factorial de %i es:%.2f\n",pop,a);
	
}
