/* N.P Alan Daniel Alvarez Castro
N.P. Suma de matrices, diagonal
fecha: 09/05/2016*/
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define p printf
#define s scanf
#define t 10
int main()
{
        int i,j,aux1,aux2,contador2,tabla[t][t],opc,reset,limite,sum1,sum2;
        do
        {
            sum1=0;
            sum2=0;
            aux1=0;
            system("cls");
            p("Con que ciclo deseas ajecutar?\n1=For\n2=While\n3=Do-While\n");
            s("%i",&opc);
            p("Cuantas filas y columnas quieres? maximo 10\n");
            s("%i",&limite);
            aux2=limite-1;
            switch(opc)
            {
                case 1:for(i=0;i<limite;i++)
                for(j=0;j<limite;j++)
                {
                    p("Ingresa el tamano de la tabla [%i][%i]\n",i,j);
                    s("%i",&tabla[i][j]);
                }
                break;
                case 2:i=0;
                while(j<limite)
                {
                j=0;
                while(j<limite)
                {
                    p("Teclea el elemento de la tabla[%i][%i]\n",i,j);
                    s("%i",&tabla[i][j]);
                    j++;
                }
                i++;
                }
                break;
                case 3:i=0;
                do
                {
                j=0;
                do
                {
                    p("Teclea el elemento de la tabla[%i][%i]\n",i,j);
                    s("%i",&tabla[i][j]);
                    j++;
                }while(j<limite);
                i++;
                }while(i<limite);
                break;
                default:p("Opcion Invalida\n");
                break;
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
            p("\nDeseas volver a iniciar el programa?\nPresione 1 =SI\nPresione 0 =NO\n");
            s("%i",&reset);
        }while(reset==1);
        system("pause");
}
