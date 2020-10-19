/*
N.p Alan Daniel Alvarez Castro 
d.p practica doctores, imc 
F: 09/04/0216

 */

#include"stdio.h"
#include"stdlib.h"

int i,npacientes,edad,peso1,prom1=0,inc1=0,suma1=0;
int peso2,prom2=0,inc2=0,suma2=0;
int peso3,prom3=0,inc3=0,suma3=0;
int peso4,prom4=0,inc4=0,suma4=0;
int peso5,prom5=0,inc5=0,suma5=0;

int main()
{
    printf("Ingrese la cantidad de pacientes\n");
    scanf("%d",&npacientes);
    for(i=1;i<npacientes+1;i++)
    {
      printf("Íngrese la edad del paciente\n ");
      scanf("%d",&edad);
      
    if(edad<13)
    {
               printf("Ingrese el peso del paciente\n ");
              
               scanf("%d",&peso1);
                inc1++;
               suma1=suma1+peso1;
               }
                   if(edad>12&&edad<18)
    {
               printf("Ingrese el peso del paciente\n ");
               inc2++;
               scanf("%d",&peso2);
               suma2=suma2+peso2;
               }
                              if(edad>17&&edad<30)
    {
               printf("Ingrese el peso del paciente\n ");
               inc3++;
               scanf("%d",&peso3);
               suma3=suma3+peso3;
               }
                                            if(edad>29&&edad<60)
    {
               printf("Ingrese el peso del paciente\n ");
               inc4++;
               scanf("%d",&peso4);
               suma4=suma4+peso4;
               }
                                                          if(edad>59)
    {
               printf("Ingrese el peso del paciente\n ");
               inc5++;
               scanf("%d",&peso5);
               suma5=suma5+peso5;
               }
               }
               if(suma1>0&&inc1>0){
               prom1=suma1/inc1;}
               if(suma2>0&&inc2>0){
               prom2=suma2/inc2;}
               if(suma3>0&&inc3){
               prom3=suma3/inc3;}
               if (suma4>0&&inc4){
               prom4=suma4/inc4;}
               if (suma5>0&&inc5){
               prom5=suma5/inc5;}
               
         printf("El promedio del peso de los ninos fue %d \n ",prom1);
         printf("El promedio del peso de los Adolescentes fue %d \n ",prom2);
         printf("El promedio del peso de los Jovenes fue %d \n ",prom3);
         printf("El promedio del peso de los Adultos Jovenes fue %d \n ",prom4);
         printf("El promedio del peso de las personas mayores fue %d \n ",prom5);
         system("pause");
         }
