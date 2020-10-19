/* 
   NP. Funciones con Matrices con parametro y sin retorno
   fecha: 23/05/2016 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define p printf
#define s scanf


void sobrantes();
void diagonal();
void lineal(int f, int c)
{
	int i,j;
	
	
int  tabla_1[f][c],tabla_2[f][c],suma[f][c];

    system("cls");
    
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

    p("\n");
	for(i=0;i<f;i++)
     for(j=0;j<c;j++)
            
            p("[%d]",suma[i][j]);
      
     
   
	
}

void sobrantes(int x,int y,int a)
{
	

	
	int c=0;
	for(x=1;x<=3;x++)
	  for(y=1;y<=3;y++) //(a[x][1]*b[1][y])+(a[x][2]*b[2][y])+(a[x][3]*b[3][y]);
	     c=(a[1][2])+(a[2][1])+(a[2][3])+(a[3][2]);
	      p(" El total de los sobrantes es:  %d  ",c);
	
}

int main ()
{
	
	int opc,repe,f,c,a[4][4],b[4][4],x,y;;
	do{
		
	p("Ingresa el numero de filas\n");
    s("%d",&f);
    p("Ingresa el numero de columnas\n");
    s("%d",&c);	
	p("1=Suma Lineal \n2=Suma de las diagonales\n3=Suma de los sobrantes\n");
	p("\nQue opcion deseas?");
	s("%i",&opc);
	switch (opc)
	{
		
		case 1: lineal(f,c);break;
		case 2: diagonal();break;
		case 3: 
	
	p("Matriz de [3x3]");
	for(x=1;x<=3;x++)
	  for(y=1;y<=3;y++)
	{
		p("\n Introducir el valor de [%d][%d]",x,y);
		s("%i",&a[x][y]);
		
	}sobrantes(int x,int y,int a[][]);break;
		default:p("No existe opcion\n");

	}
		p("Deseas repetir el preograma?\n 1=si\n2=no\n");
		s("%i",&repe);
     } while(repe==1);
     
	system("pause");
	return 0;
	
}

void diagonal()
{
    int i,t=10,j,aux1,aux2,contador2,tabla[t][t],opc,reset,limite,sum1,sum2;
    sum1=0;
            sum2=0;
            aux1=0;
            system("cls");
            p("Cuantas filas y columnas quieres? maximo 10\n");
            s("%i",&limite);
            aux2=limite-1;
            
            for(i=0;i<limite;i++)
                for(j=0;j<limite;j++)
                {
                    p("Ingresa el tamano de la tabla [%i][%i]\n",i,j);
                    s("%i",&tabla[i][j]);
                }
                
                  p("\n===================================\n\tResultados\n===================================\n");
              for(i=0;i<limite;i++)
              {
              p("\n");
                    for(j=0;j<limite;j++)
                    {
                    p(" %i ",tabla[i][j]);
                    }
              }
                    for(i=0;i<limite;i++)
                    {
                    sum1=sum1+tabla[i][aux1];
                    aux1++;
                    sum2=sum2+tabla[i][aux2];
                    aux2--;
                    }
              p("\n suma de izquierda a derecha es de: %i \nLa suma de derecha a izquiera de es de: %i \n",sum1,sum2);
	
}

