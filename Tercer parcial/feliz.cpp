/* 

n.p Alan Daniel Alvarez Castro 
fecha 07/06/2016
d.p realizar un programa que realize: 1.Diferencia de tiempo 2.Multiplicacion de vectores aleatorios 
3.Total de los productos de la tienda 4.Elementos mas bajo y alto de una matriz\

*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

float resultado;
int tiempo (int,int,int,int);//con parametro y con retorno
void vectores(int);//con paso y sin retorno
int tienda();//sin parametro y con retorno
void matriz();//sin paso de parametro y sin retorno 

int main()
{
int opc,repe,hora1,hora2,min1,min2,dif,tam;
do
{ system("cls");
printf("Selecciona\n1.Diferencia de tiempo\n2.Multiplicacion de vectores aleatorios\n3.Total de los productos de la tienda\n4.Elementos mas bajo y alto de una matriz\n");
scanf("%i",&opc);

switch(opc)
{
case 1:	
printf("Ingresa la primera hora y sus minutos: ");
scanf("%i %i",&hora1,&min1);
printf("Ingresa la segunda hora y sus minutos: ");
scanf("%i %i",&hora2,&min2);
dif=tiempo(hora1,hora2,min1,min2);
printf("La diferencia en minutos es: %iMINUTOS    \n",dif);
printf("La diferencia en horas es de :%i HORAS",dif/60);
break;

case 2:
printf("\nIntroduce el tamaño de los vectores:");
scanf("%i",&tam);
vectores(tam);

break;

case 3:tienda();
printf("EL precio total de la tienda:%.2f",resultado);
break;

case 4:matriz();
break;
}

printf("\nDeseas hacer otro ciclo ?\n");
scanf("%i",&repe);
}
while(repe==1);
}
int tiempo(int hora1,int hora2,int min1,int min2)
{
	int dif;
	if(hora1>hora2)
	{
	dif=(((24-hora1)+hora2)*60)+(min1+min2);
    }
    else
    {
    	dif=(((hora1-hora2)*60)+(min1-min2));
    	if(dif<0)
    	{
    	dif=(((hora1-hora2)*60)+(min1-min2))*-1;
        }
	}		
	return dif;	
}

int tienda()// sin parametro con retorno
{
int pro,i;
float total,P;
struct
{
int codigo,cantidad;
char nombre[100];
float precio;
}tienda[100];
printf("Introduce la cantidad de productos en la tienda:");
scanf("%i",&pro);

for(i=0;i<pro;i++)
{
printf("Nombre del producto:");
fflush(stdin);
gets(tienda[i].nombre);

printf("Codigo del producto:");
scanf("%i",&tienda[i].codigo);

printf("Cantidad del producto:");
scanf("%i",&tienda[i].cantidad);

printf("Presio del producto:");
scanf("%f",&tienda[i].precio);
}
printf("Nombre\tCodigo\tCantidad\tprecio\t\t\n");
total=0;
for(i=0;i<pro;i++)
printf("%s       %i          %i       %.2f\n",tienda[i].nombre,tienda[i].codigo,tienda[i].cantidad,tienda[i].precio);
for(i=0;i<pro;i++)
{
total=total+(tienda[i].precio*tienda[i].cantidad);
//total=total+P;
}
return resultado=total;
}

void vectores(int t)//con paso y sin retorno
{
int i,n,tam,vector1[100],vector2[100],vector3[100];
//printf("\nIntroduce el tamaño de los vectores:");
//scanf("%i",&tam);
srand(time(NULL));

for(i=0;i<t;i++)
vector1[i]=1+rand()%((10+1)-1);	

for(i=0;i<t;i++)
vector2[i]=1+rand()%((10+1)-1);	

printf("Vector1\tVector2\tVector resultante\n");
for(i=0;i<t;i++)
{
vector3[i]=vector1[i]*vector2[i];
printf("%i         %i          %i\n",vector1[i],vector2[i],vector3[i]);
}
}
void matriz()
{
int f,c,i,j,matriz[10][10],mayor=0,menor=100;
printf("Introduce el tamaño de la matriz:");
scanf("%i%i",&f,&c);

for(i=0;i<f;i++)
	for(j=0;j<c;j++)
	{
	printf("teclea el elemento de la tabla[%i][%i]",i,j);
	scanf("%i",&matriz[i][j]);
	}

for(i=0;i<f;i++)
{
	printf("\n");
	for(j=0;j<c;j++)
	printf("%i",matriz[i][j]);
	printf("\n");
}


for(i=0;i<f;i++)
{
	printf("\n");
	for(j=0;j<c;j++)
if(matriz[i][j]>mayor)
{
mayor=matriz[i][j];
} 
}
printf("el numero mayor es:%i",mayor);
for(i=0;i<f;i++)
{
	printf("\n");
	for(j=0;j<c;j++)
if(matriz[i][j]<menor)
{
menor=matriz[i][j];
} 
}
printf("el numero menor es:%i",menor);
}



	

	

 
