/* 

n.p Alan Daniel Alvarez Castro 
fecha 07/06/2016
d.p realizar un programa que realize: 1.Diferencia de tiempo 2.Multiplicacion de vectores aleatorios 
3.Total de los productos de la tienda 4.Elementos mas bajo y alto de una matriz\

*/

#include "stdlib.h"
#include "stdio.h"

int resultado;
//void minutos;
int numeros();
int geometria();
int promedio();

int total,minutos,total1,minutos1,i,x, y, vector1[50],vector2[50];

int horas(int n,int m,int n1,int m1)
{	
minutos = n*60; // hora 1
total = minutos + m;

minutos1 = n1*60; // hora 2
total1 = minutos1 + m1;

return total,total1;

}

int contrasena(int con1)//con paso y con parametro
{
	int a;
 if(con1==12345)
 
 	a=1;
 
 else 
 a=0;
return a;
}

int main()
{
int opc,c,i,b,con,n,m,n1,m1;
for(i=1;i<=3;i++)
{
 system("cls");
 printf("introduce la contrasena para ingrear al menu:");
 scanf("%i",&con);
b=contrasena(con);
if(b==1)
	i=5;
else 
{
printf("\a");
if(i<3)
{
printf("vuelve a intentarlo\n");
system("pause");
}
}
}
if(b==1)
{
do
{
system("cls");
printf("selecciona:\n1.Diferencia de tiempo\n2.Numeros\n3.Formar la figura geometrica de un triangulo\n4.La media de N numeros\n");
scanf("%i",&opc);

switch(opc)
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
break;//minutos();
break;

case 2: numeros();
break;

case 3:geometria();
break;
case 4: promedio();
break;	
}
printf("\nDesean  REGRESAR AL MENU ? PRESIONE SI=1");
scanf("%i",&c);
}
while(c==1);
}
else 
printf("\n se acabaron sus intentos!!!");
}

/*void minutos()//
{

}*/

int numeros()
{
int mayor=0,i,c,posicion[10],menor=0;
for(i=0;i<10;i++)
{
printf("introduce un numero");
scanf("%i",&posicion[i]);
}
c=0;
for(i=0;i<10;i++)
{
if(posicion[i]%2==0)
{
c=c+1;
}
}
for (i=0;i<10;i++)
{
if(mayor>posicion[i])
mayor=posicion[i];
else 
menor=posicion[i];
}

printf("Estos son los numeros pares:%i\n",c);
printf("Estos son los numeros max:%i\n",mayor);
printf("Estos son los numeros min:%i\n",menor);
}

int geometria()
{
int i,f,j;
char b;
printf("introduce la altura del triangulo:");
scanf("%i",&f);
printf("\nintroduce una letra:");
fflush(stdin);
scanf("%c",&b);
for(i=1;i<=f;i++)
{
for(j=1;j<=i;j++)
{
printf("%c",b);
}
printf("\n");
}

}

int promedio()
{
int numero[10],a,i;
float b,c;
printf("intoduce la cantidad de numeros que deseas:");
scanf("%i",&a);
b=0;
for(i=0;i<a;i++)
{
	printf("introduce el numero:");
	scanf("%i",&numero[i]);
	b=b+numero[i];
}
c=b/a;
printf("promedio total:%.2f",c);
}

