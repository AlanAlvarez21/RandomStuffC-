/* NP. Alan Daniel Alvarez castro
Np. Funcion sin paso de parametros y sin retorno
fecha: 18/05/2016*/

#include "stdio.h"
#include "stdlib.h"
#include"conio.h"
#define p printf
#define s scanf


void alumnos()
{
	
}

void wallmart()
{
	p("************WALLMART********************\n");
	int semana[4][7],ventastotales[4],ventassemana[7],reset,opc,contador1,contador2;
    char suc[4][20]={"Walmart Norte","Walmart Sur  ","Walmart Este ","Walmart Oeste"};
    char dia[7][10]={"lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    
    for(contador1=0;contador1<4;contador1++)
                for(contador2=0;contador2<7;contador2++)
                {
                    printf("Ingrese las ventas de la sucursal %s del %s \n",suc[contador1],dia[contador2]);
                    scanf("%i",&semana[contador1][contador2]);
                    ventastotales[contador1]=ventastotales[contador1]+semana[contador1][contador2];
                }
                
     printf("======================Ventas======================\n");
    printf("Sucursales\tLunes   Martes   Miercoles  Jueves  Viernes   Sabado  Domingo\n\t");
    for(contador1=0;contador1<4;contador1++)
              {
              printf("\n%s\t",suc[contador1]);
                    for(contador2=0;contador2<7;contador2++)
                    {
                    printf("%i\t",semana[contador1][contador2]);
                    }
              }
              printf("\nVentas :\t");
    for(contador2=0;contador2<7;contador2++)
    {
            for(contador1=0;contador1<4;contador1++)
            {
                ventassemana[contador1]=ventassemana[contador1]+semana[contador2][contador1];
            }
    }
    printf("\n");
    for(contador1=0;contador1<7;contador1++)printf("%i\t",ventassemana[contador1]);
    for(contador1=0;contador1<4;contador1++)printf("\n%s Vendio: %i\n",suc[contador1],ventastotales[contador1]);
}

main()
{
	int rep,opc;
	do{
		p("tarea PROGRAMA SIN RETERNO NI PARAMETRO (ARREGLO BIDIMENSIONAL)");
		p("\n 2=PROGRMA WALLMART \n 1=CALIFICACIONES ALUMNOS");
		p("Cual opcion deseas?\n");
		s("%i",&opc);
		
		switch(opc)
		{
			
			case 1: alumnos(); break;
			case 2: wallmart(); break;
			
			default:p("No existe opcion\n");
		}
		p("Deseas hacer otra operacion? 1=si \n");
		s("%i",&rep);
	}while(rep==1);
}

