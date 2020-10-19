/* N.P Alan Daniel Alvarez Castro 
   fecha 01/06/2016
   dp realizar 4 programas utilizando las funciones con parametros y retornos utilizando la libreria time para función random
   */

#include "stdio.h"
#include <iostream> 
#include <windows.h>
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "time.h"
#define p printf
#define s scanf
#define t 10

int n,i,total,f,c,a,z,promedio;
char contrasena[20];
int  prom(int, int);
int suma(int, int); 
int estructura();
int cadena();
void random() // numero random 

{
   int iSecret, iGuess;

  /* initialize random seed: */
  srand (time(NULL));

  /* generate secret number between 1 and 10: */
  iSecret = rand() % 10 + 1;

  do {
    printf ("adivina numero : ");
    scanf ("%d",&iGuess);
    if (iSecret<iGuess) puts ("el numero secreto es mas bajo");
    else if (iSecret>iGuess) puts ("el numero secreto es mas alto");
  } while (iSecret!=iGuess);

  puts ("Felicidades!");
}
int estructura()
{
	
	struct
{
    int total,horas,ch;
	float impuestos;
	char nombre[100];


}trabajador[100];
	
	p("Cuantos trabajadores deseas registrar?\n");
	s("%i",&n);
	for(i=1;i<=n;i++)
	
	{
    p("Ingresa el nombre del trabajador numero %i\n",i);
	fflush(stdin);gets(trabajador[i].nombre);
	p("Ingresa las horas trabajadas \n");
	s("%i",&trabajador[i].horas);
	p("Ingresa el costo de hora\n");
	s("%i",&trabajador[i].ch);
    trabajador[i].total=trabajador[i].horas*trabajador[i].ch;
    trabajador[i].impuestos=trabajador[i].total*.2;
	system("cls");
	}
	p("==Nombre==\t ==horas==\t ==costo-hora==\t ==total==\t  ==impuestos==\n\n");
	for(i=1;i<=n;i++)
	{
	p("%s     \t     %d      \t    %d      \t     %d          %f    \n",trabajador[i].nombre,trabajador[i].horas,trabajador[i].ch,trabajador[i].total,trabajador[i].impuestos);
	}
}
using namespace std;
 main() 
{
	int repe,opc,d;
	do{
		
	           p("Ingrese su contrasena\n");
	           fflush(stdin);gets(contrasena);
	           system("cls");
	           if(strcmp(contrasena,"1995")==0) 
	           
	{
     
	p("\nTRABAJO 01\06\2016 \n\n");
	Beep(523,500); // 523 hertz (C5) for 500 milliseconds     
    
	p("Que desea hacer?\n\n");
	p(" 1=Numero random\n  2=Cheque de los trabajadores\n  3=Sacar el total de caracteres de una cadena\n  4=Matriz, suma y promedio\n");
    	s("%i",&opc);
    	
    	switch (opc)
    	{
    		case 1: system("cls"); random(); break;
    	
    		case 2: system("cls"); p("Cheque de los trabajadores\n");
    		estructura();
    		break;
    		
    		case 3: system("cls");cadena();
  		    p("Total de caracteres de la cadena es: %d",total);
  	        break;
  	        
  	        case 4:system("cls"); p("Cuantos filas y columnas quieres tu matriz maximo 10\n");
	                p("Ingresa el numero de filas\n");
	                s("%i",&f);
	                p("Ingresa el numero de columnas\n");
	                s("%i",&c);
	                p("\nQue deseas hacer?\n 1=Suma de los elementos de la matriz\n 2=Promedio de los elementos de la matriz\n");
	                s("%i",&d);
	                if (d==1)
	                {
	                suma(f,c);
		            p("\nLa suma de los elementos es: %d",a); 
					}
					else
					{
					prom(f,c);
		            p("\nEl promedio es :%d",a);
					}
					break;
  	        
    	default: p("No existe opcion\n");
		}
		
		}
	else p("Contrasena incorrecta");
	p("\nDeseas repetir el programa? 1=si\t2=no\n");
	s("%i",&repe);
	
     }while(repe==1);
     getch();
    
}
int cadena ()
{
	int x;
    char letra[50];
	
	
	p("Introduce la cadena\n");
    fflush(stdin);gets(letra);
    x=strlen(letra);

	return total=x;
}
int suma(int f, int c)

{
	 int i,j, matriz[t][t];
	
	
		for(i=0;i<f;i++)
		for (j=0;j<c;j++)
		{
			p("Teclea el elemento de la matriz[%i][%i]",i,j);
			s("%i",&matriz[i][j]);
		
			a=a+matriz[i][j];
		}
		for (i=0;i<f;i++)
		{
			p("\n");
		for (j=0;j<c;j++)
		p("%i",matriz[i][j]);
	
		
		}
		
		return a;
}
int prom(int f, int c){
	
	int i,j, matriz[t][t];
	z=f*c;
	
		for(i=0;i<f;i++)
		for (j=0;j<c;j++)
		{
			p("Teclea el elemento de la matriz[%i][%i]",i,j);
			s("%i",&matriz[i][j]);
		
			a=a+matriz[i][j];
		}
		for (i=0;i<f;i++)
		{
			p("\n");
		for (j=0;j<c;j++)
		p("%i",matriz[i][j]);
	
		
		}
		a=a/z;
		return a;
		
	
}



