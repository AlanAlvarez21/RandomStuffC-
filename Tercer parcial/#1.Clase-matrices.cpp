/* NP. Alan Alvarez Castro
   NP> Tablas (Clase matrices)
   fecha: 02/05/2016 */
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define t 10
#define s scanf
#define p printf

int main ()
{
	int i,j, tabla[10][10],f,c,opc,repe;
	
	do{
	
	p("Cuantos filas y columnas quieres en la tabla maximo 10\n");
	s("%i%i",&f,&c);
	p("Con que ciclo\n 1=for \n 2=while \n 3=Do-while\n");
	s("%i",&opc);
	
	switch (opc)
	{
		case 1: 
		for(i=0;i<f;i++)
		for (j=0;j<c;j++)
		{
			p("Teclea el elemento de la tabla[%i][%i]",i,j);
			s("%i",&tabla[i][j]);
		}
		for (i=0;i<f;i++)
		{
			p("\n");
		for (j=0;j<c;j++)
		p("%i",tabla[i][j]);
		}
		
		break;
		
		case 2: i=0;
	
			while (i<f) 
			{
				j=0;
					while (j<c) 
					{
				p("Teclea el elemento de la tabla[%i][%i]",i,j);
			s("%i",&tabla[i][j]);
			j++; 
			while (j<c);
			}
	       i++;
		}
		i=0;
		while (i<f)
		{
			p("\n");
			i=0;
			while (i<c)
			{
			p("%i",&tabla[i][j]);
			j++;	
			}
			i++;
		}
		break;
		
		case 3: i=0;
	
			while (j<c) 
			{
				i=0;
					while (j<c) 
					{
				p("Teclea el elemento de la tabla[%i][%i]",i,j);
			s("%i",&tabla[i][j]);
			i++; while (j<c);
			}
	       i++;
		}
		while (i<f);
	
		
		
		break;
		default: p("No existe la opcion\n");
	}
	p("\nDeseas repetir el ciclo 1=si\n");
	s("%i",&repe);
}
while (repe==1);
	
}
