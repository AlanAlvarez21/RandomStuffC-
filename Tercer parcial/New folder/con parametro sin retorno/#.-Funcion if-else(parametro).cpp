/* 
   NP. Funciones con if else con parametro
   fecha: 23/05/2016 */
#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

void condicion_par(int,int);
void par_impar(int x)
{
	

	if(x%2==0) p("El numero %i es Par\n",x);
	else p("El numero %i es impar\n",x);
	
}

int main ()
{   int opc1,opc,repe,x,y,a,b;
	do{
	 
	
	
	printf("código 1 examen Programación  MENU  \n 1)Agenda \n2)Número par e impar \n3)banco \n4)cadena en mayusculas");
	printf("que opcion desea?:");
	scanf("%i",&opc1);
	switch (opc1)
	{
	
	case 1:{
		break;
	}
	
	
	case 2:{ system("cls");
	p("Ingresa dos numeros impar\n");
	s("%i",&x);
	
	
		
		
		 par_impar(x);
	

	
		break;
	}
	
	
	case 3:{
		break;
	}
	
	case 4:{
		break;
	}
	
	
	
	
		
	
		p("Deseas repetir el preograma?\n 1=si\n2=no\n");
		s("%i",&repe);
     }
	 } while(repe==1);
     
	
	return 0;
	
}

void condicion_par(int a, int b)
{
	

	if(a<b) p("El numero %i es mayor que %i\n",a,b);
	else p("El numero %i es mayor que %i\n",b,a);
	
}
