/* NP.Alan Daniel Alvarez Castro 
   NP. Suma de matrices lineal
   fecha: 09/05/2016 */
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define p printf
#define s scanf

int main()
{
int f,c,i,j,opc,repe;

do{


    p("Ingresa el numero de filas\n");
    s("%d",&f);
    p("Ingresa el numero de columnas\n");
    s("%d",&c);

int  tabla_1[f][c],tabla_2[f][c],suma[f][c];

    system("cls");
    p("Con que ciclo deseas ajaecutar?\n\n 1=For\n 2=while\n 3=do/while\n");
    s("%d",&opc);


switch (opc)
{

case 1:
    for(i=0;i<f;i++)
	{
    for(j=0;j<c;j++)
	  {
            p("Tabla_1[%d][%d]",i,j);
            s("%d",&tabla_1[i][j]);

      }
    }

   for(i=0;i<f;i++)
   {
      for(j=0;j<c;j++)
	  {
            p("Tabla_2[%d][%d]",i,j);
            s("%d",&tabla_2[i][j]);
          
      }
   }
           
   for(i=0;i<f;i++)
   {
     for(j=0;j<c;j++)
	  {
            suma[i][j]=tabla_1[i][j]+tabla_2[i][j];
      }
  }

	for(i=0;i<f;i++)
	{
     for(j=0;j<c;j++)
	  {
            
            p("[%d]",suma[i][j]);
      }
      p("\n");
      
      for(i=0;i<f;i++)
       p("La tabla_1 [%d] ",tabla_1[i][j]);
     for(j=0;j<c;j++)
      p(" tabla_2 [%d]",tabla_2[i][j]);
       
     
   }

   break;

   case 2: i=0;
       while(i<f)
	{
	    j=0;
    while(j<c)
	  {
            p("Tabla_1[%d][%d]",i,j);
            s("%d",&tabla_1[i][j]);
          j++;
      }
      i++;
    }
    i=0;
   while(i<f)
   {
       j=0;
      while(j<c)
	  {
            p("Tabla_2[%d][%d]",i,j);
            s("%d",&tabla_2[i][j]);
            
            j++;
      }
      i++;
   }
   i=0;
   while(i<f)
   {
       j=0;
     while(j<c)
	  {
            suma[i][j]=tabla_1[i][j]+tabla_2[i][j];
            j++;
      }
      i++;
  }
    i=0;
	while(i<f)
	{
	    j=0;
     while(j<c)
	  {

            p("[%d]",suma[i][j]);
            j++;
      }
      i++;
   }

   break;
   
   case 3:
       i=0;
    do
	{
	    j=0;
    do
	  {
            p("Tabla_1[%d][%d]",i,j);
            s("%d",&tabla_1[i][j]);
          j++;
      }while(j<c);
      i++;
    }while(i<f);
    i=0;
   do
   {
       j=0;
      do
	  {
            p("Tabla_2[%d][%d]",i,j);
            s("%d",&tabla_2[i][j]);
            
            j++;
      }while(j<c);
      i++;
   }while(i<f);
   i=0;
   do
   {
       j=0;
       do
	  {
            suma[i][j]=tabla_1[i][j]+tabla_2[i][j];
            j++;
      }while(j<c);
      i++;
  }while(i<f);
    i=0;
	do
	{
	    j=0;
     do
	  {

            p("[%d]",suma[i][j]);
            j++;
      }while(j<c);
      i++;
   }while(i<f);

   break;
   default: p("No existe la opcion\n");
}
p("Deseas repetir el programa?");
s("%i",&repe);
}while(repe==1);
   system("pause");
}
