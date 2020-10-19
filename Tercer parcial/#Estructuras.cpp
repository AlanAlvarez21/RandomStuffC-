/* NP. Alan Alvarez Castro
   NP> estructuras (ejemplo) 
   fecha: 25/05/2016 */


#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

struct 
{
	char nombre[100];
	char carrera[100];
	int semestre;
	float promedio;
	
} alumno[100];

main ()
{    
	int n,i;
	p("Cuantos alumnos desea registrar?\n");
	s("%i",&n);
	for(i=1;i<=n;i++)
	
	{
    p("Ingresa el nombre del alumno\n");
	fflush(stdin);gets(alumno[i].nombre);
	p("Ingresa el semestre \n");
	s("%i",&alumno[i].semestre);
	p("Ingresa la carrera\n");
	fflush(stdin);gets(alumno[i].carrera);
	p("Ingresa el promedio \n");
	s("%f",&alumno[i].promedio);

	
	
	}
	p("==Nombre==\t ==semestre==\t ==carrera==\t ==promedio==\n\n");
	for(i=1;i<=n;i++)
	{
	p("   %s     \t     %i      \t    %s      \t      %.2f   \n",alumno[i].nombre,alumno[i].semestre,alumno[i].carrera,alumno[i].promedio);
	}
	
	
    system("pause");
}
