/* 

n.p Alan Daniel Alvarez Castro 
d.p Diseñar una funcion pedir dos horas con minutos distintas en formato 24 horas y comvertir a minutos en enteros con parmetro y con retorno
  01/06/2016 
   pedir una funcion que contenga 2 vectores llenados con numeros aleatorios mstrar los 2 vectores y su multiplicacion con paso y sun retorno 
   
   llenar una funcion con una estructura que contenga las siguientes campos 
   - codigo
   -nombre
   -cantidad 
   -precio
   
   imprimir la estructura y el total del precio de todos los productos 
*/
   
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "math.h"
int long resultado;

int long funcion_1(int n)
{
int i;
int long ac;
i=1; ac=1;
	do   
          {
	ac=ac*i; 
	i++;
	}
          while (i<=n);
return resultado=ac;
}

void funcion_2(int n)
{
    int i;
    int long ac;
i=1; ac=1;
	while (i<=n)
	{
	ac=ac*i; 
	i++;
	}	
printf("\nEl factorial es: %lld\n",ac);
}

int long funcion_3()
{
int n,i;
int long ac;
puts("\nIntroduce un numero para realizar su factorial por favor: ");
scanf("%i", &n);
ac=1;
	for(i=1;i<=n;i++)
	ac=ac*i; 
return resultado=ac;
}

void funcion_4()
{
    int i,n;
    int long ac;
puts("\nIntroduce un numero para realizar su factorial por favor: ");
scanf("%i", &n);
i=1; ac=1;
	while (i<=n)
	{
	ac=ac*i; 
	i++;
	}	
printf("\nEl factorial es: %lld\n",ac);
}


main()
{	
int opc,rep,n;
do
{
system("cls");
puts("\nNumero Factorial\n");
printf("Que desea hacer:\n 1.- Con paso con retorno.\n 2.- Con paso sin retorno.\n 3.- Sin paso con retorno.\n 4.- Sin paso sin retorno.\n");
scanf("%i",&opc);
switch (opc)
{
case 1:
system("cls");
puts("\nIntroduce un numero para realizar su factorial por favor: ");
scanf("%i", &n);
resultado=funcion_1(n);
printf("\nEl numero factorial es = %lld",resultado);
break;

case 2:
system("cls");
puts("\nIntroduce un numero para realizar su factorial por favor: ");
scanf("%i", &n);
funcion_2(n);
break;

case 3:
system("cls");
resultado=funcion_3();
printf("\nEl numero factorial es = %lld",resultado);	
break;

case 4:
system("cls");
funcion_4();
break;
		   
	default: printf("\n No existe esa opcion.\n");
}
printf("\n Deseas realizar otra operacion: 1 = si    2 = no  ");    
scanf("%i",&rep);
}
while(rep==1);
}
