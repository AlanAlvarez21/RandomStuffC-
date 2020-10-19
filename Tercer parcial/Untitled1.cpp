/* 
Alan Daniel Alvarez Castro 
fecha 13/06/2016
D.P-"El caminante", servicio de taxis renovara la flota de los vehiculos y los vendera segun el modelo: 
Vehiculos modelo> 2010 el costo sera de $100,000.00 para vehiculos modelo > 2005 y <=2010 el costo sera
de $80,000.00.Para todos los demas vehiculos costaran $55,000.00. Con paso de parametro y sin retorno.

-Para calcular el sueldo de un empleado en "DULCES LA ESTRELLA" Se debe conocer el salario diario y los
dias trabajados del empleado en la semana. La funcion recibira como parametros salario y dias determine el 
salario bruto (salario*dias) y retornara el salario desde donde fue invocada donde se imprimira elnombre del
trabajador y sueldo que recibira

-"FRUTAS DE JALISCO" tiene 5 bodegas en el mercado de abastos y cada una de ellas lleva un control de ventas
de cada dia de la semana (7). Dise;a un funcion sin parametros y sin retorno que solicite el monto vendido de
cada dia en cada una de las bodegas estos valores los almacenaras en una matriz de 5*7 usaras demas un vector
de tama;o 5 para almacenar un total vendido por cada bodega en la semana.

-En una escuela se almacena la informacion de los estudiantes (nombre, carrera, semestre y promedio). Dise;a
una funcion con retorno y sin parametros en donde declares una estructura (registro) para almacenar esta
informacion. La estructura sera manipulada por arreglo de tama;o 100. Se solicitara la informacion de n
alumnos y se determinara cual es el promedio del grupo. Imprimira los datos de los alumnos y retornara el
promedio global.
*/


#include "stdlib.h"
#include "stdio.h"
#include "conio.h"
#define s scanf 
#define p printf

int i,j,rr;
float sbruto;

int bodega ();
int escuela ();
void caminante (int autos);
int estrella (float dia, int dias);

struct {
		int promedio,a,acum, semestre;
		float global;
		char carrera[20],nombre[20];
		
	}alumnos[100];
	

main (){

float dia;
int opc,autos,dias;
char nombre[50];	
p("CUAL OPCION DESEAS ? \n 1 - el caminante (con pase de parametro sin retorno)\n 2 - dulces la estrella \n 3 - Frutas de jalisco \n 4 - escuela \n OPCION: ");
s("%i",&opc);
switch(opc){
	
case 1: 
	   system("cls");  
       p("'EL CAMINANTE'\n");
	   p("Cuantos autos deseas renovar en su flotas?\n");
	   s("%i",&autos);
	   caminante(autos);
break;	

case 2:
	 system("cls");  
       p("'Dulces la estrella'\n");
	   p("INGRESE NOMBRE DEL EMPLEADO?:\n");
	   fflush(stdin);gets(nombre);
	   p("ingrese salario por día: \n");
	   s("%f",&dia);
	   p("ingrese dias trabajados: \n");
	   s("%i",&dias);
	   estrella(dia, dias);
	   system("cls"); 
	  p("El salario bruto del empleado %s es %.2f\n",nombre,sbruto);
break;	

case 3: bodega ();
break;	

case 4: 


escuela();

p(" El promedio global es %.2f",alumnos[i].global);

break;		
	
	
}

	
	
	
	


system("PAUSE");
	

}


int escuela()
{
	
	
	p("Cuantos almnos deseas registrar?\n");
s("%i",&alumnos[100].a);
	alumnos[100].acum=0;
	for (i=1;i<=alumnos[100].a;i++)
	{
		p("Nombre del alumno\n");
		fflush(stdin);gets(alumnos[i].nombre);
		p("Promedio\n");
		s("%i",&alumnos[i].promedio);
		alumnos[i].acum=alumnos[i].acum+alumnos[i].promedio;
		p("Carrera\n");
		fflush(stdin);gets(alumnos[i].carrera);
		p("Semestre\n");
		s("%i",&alumnos[i].semestre);
		
	}
	
	for (i=1;i<=alumnos[100].a;i++)
	{
		p("nombre  \t  promedio  \t  carrera  \t  semestre\n");
		p("%s      \t    %d      \t   %s      \t    %d    \n",alumnos[i].nombre,alumnos[i].promedio,alumnos[i].carrera,alumnos[i].semestre);
		
	}
	alumnos[100].global=alumnos[i].acum/alumnos[i].a;
     return alumnos[i].global;

	
}

int estrella (float dia, int dias)
{

sbruto = dia * dias;
return sbruto;	
	
}


void caminante (int autos)
{
	
char carro[50];
	int modelo[20];
	
	for (i=1;i<=autos;i++)
	{
		p("Ingresa la marca del carro [%i]\n",i);
		fflush(stdin);gets(carro);
		system("cls");
		p("Ingresa su modelo\n");
		s("%i",&modelo[i]);
		system("cls");
	}
	for (i=1;i<=autos;i++)
	{
		
		p("El carro %s del modelo %i\n",carro,modelo[i]);
	}	
}

int bodega()
{
	int a,ventas[10][10],total[5];
	
	
	p("'FRUTAS DE JALISCO'\n");
		for(i=1;i<=5;i++)
		{
	    a=0;
		for (j=1;j<=7;j++)
		{
			p("Teclea la ventas de la bodega [%i] el dia [%i]",i,j);
			s("%i",&ventas[i][j]);
			a=a+ventas[i][j];
			total[i]=a;
			
		}	
		}
		for (i=1;i<=5;i++)
		{
			p("\n");
		for (j=1;j<=7;j++)
		p("%i",ventas[i][j]);
		}
	
	   for (i=1;i<=5;i++)
	   {
	   	p("\nEl total de las ventas del dia [%i] fueron %i\n ",i,total[i]);
	   }
		
		
	    
}
