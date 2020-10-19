/* 



NP Alan Daniel Alvarez Castro
d.p :

   1 - Diseñar una funcion pedir dos horas con minutos distintas en formato 24 horas y comvertir a minutos en enteros con parmetro y con retorno
   
   2 - pedir una funcion que contenga 2 vectores llenados con numeros aleatorios mstrar los 2 vectores y su multiplicacion con paso y sun retorno 
   
   3 - llenar una funcion con una estructura que contenga las siguientes campos 
   - codigo
   -nombre
   -cantidad 
   -precio
   
    imprimir la estructura y el total del precio de todos los productos 
   
  4 - llenar una matriz de nxn encontra el elemento mas bajo y el mas alto  
  
  fecha 06/06/2016
   */
   
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "math.h"
#include "time.h"
int long resultado;

int total,minutos,total1,minutos1,i,x, y, vector1[50],vector2[50];
void estructura();

int horas(int n,int m,int n1,int m1)
{	
minutos = n*60; // hora 1
total = minutos + m;

minutos1 = n1*60; // hora 2
total1 = minutos1 + m1;

return total,total1;

}

void vectores(int n)
{


srand (time(NULL));

for (i=1;i<=n;i++) // vector 1
{
	
y = rand() % 100 + 1;
vector1[i] = y;
	
} 

for (i=1;i<=n;i++) // vector 2
{
	
y = rand() % 100 + 1;
vector2[i] = y;
	
} 

printf("VECTOR 1 VECTOR 2     MULTIPLICACION\n");

for (i=1;i<=n;i++) // Imprime 
{
 printf("\n %i  *   %i     =     %i ",vector1[i],vector2[i],vector1[i]*vector2[i]);	

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



main()
{	



int opc,rep,n,m,n1,m1;
do
{
system("cls");
puts("\nTrabajo 06/06/2016 \n");
printf("Que desea hacer:\n 1.- Convertir horas a minutos - Con paso con retorno.\n 2.- Llenar 2 vectores con numeros aleatorios Con paso sin retorno.\n 3.-Factura Articulos  Sin paso sin  retorno.\n 4.- Matriz n*n Sin paso sin retorno.\n");
scanf("%i",&opc);
switch (opc)
{
	
	
case 1:
system("cls");
puts("\nIntroduce dos horas en formato 24 hrs, separa las horas y minutos CON UN ESPACIO DE SEPARACION (Ej. 21:30 ---> 21 30 ) : ");
printf("\n INTRODUCE LA HORA 1:\n");
scanf("%i %i", &n,&m);
printf("\n INTRODUCE LA HORA 2:\n");
scanf("%i %i", &n1,&m1);
horas (n ,m , n1 , m1);
printf(" Total minutos hora 1 : %i \n Total minutos hora 2: %i\n",total,total1);
break;


case 2:
system("cls");
puts("\nIntroduce un numero para determinar el tamaño de los vectores: ");
scanf("%i", &n);
vectores(n);
break;


case 3:  
system("cls");
estructura ();
break;	


case 4:
system("cls");
matriz();
break;
		   
default: printf("\n No existe esa opcion.\n");

}

printf("\n Deseas realizar otra operacion: 1 = si    2 = no  ");    
scanf("%i",&rep);
}
while(rep==1);
}


void estructura()
{
	struct 
	{
		int codigo,cantidad;
		char nombre[20];
		float precio;
		
	}producto[100];
	
	int n;
	printf("Cuantos productos deseas registrar?\n");
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	
	{
    printf("Ingresa el nombre del producto\n");
	fflush(stdin);gets(producto[i].nombre);
	printf("Ingresa el codigo del producto \n");
	scanf("%i",&producto[i].codigo);
	printf("Ingresa la cantidad \n");
	scanf("%i",&producto[i].cantidad);
	printf("Ingresa el precio \n");
	scanf("%f",&producto[i].precio);

	
	
	}
	printf("==Nombre==\t ==codigo==\t ==cantidad==\t ==precio==\n\n");
	for(i=1;i<=n;i++)
	{
	printf("  %s     \t%i      \t    %i      \t     %.2f   \n",producto[i].nombre,producto[i].codigo,producto[i].cantidad,producto[i].precio);
	}
	
	
}
