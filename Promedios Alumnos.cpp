/*
N.p Alan Daniel Alvarez Castro 
d.p sacar promedio de un numero indeterminado de alumnos 
F: 09/04/0216

 */

#include <stdlib.h>
#include <stdio.h>

main ()
{
    char nom[10][30];
    int mat,opc,num,i,a,res,op,h,g;
    int prom[30];
do
{
printf("Cuantos alumnos desea ingresar?\n");
scanf("%i",&num);
 
printf("Con que ciclo deseas efectuar la funcion?\n 1)Ciclo For\n 2)Ciclo While\n 3)Ciclo Do-While\n");
    scanf("%i",&opc);
system ("cls");
 switch(opc)
 {
            case 1:
                 h=0; g=0;
                 a=0;
                 for(i=1;i<=num;i++)
            {
                  printf("\nEscriba el nombre del alumno\n");
                  fflush(stdin);
                  gets(nom[i]);
                  printf("Escriba el promedio del alumno\n");
                  scanf("%i",&prom[i]);
                  a=a+prom[i];
             }
            
                     break;
             case 2:
                  h=0;
                  g=0;
                   a=0;
                   i=1;
                 while(i<=num)
            {
                  printf("\nEscriba el nombre del alumno\n");
                  fflush(stdin);
                  gets(nom[i]);
                  printf("Escriba el promedio del alumno\n");
                  scanf("%i",&prom[i]);
                  a=a+prom[i];
                  i++;
             }
            
                     break;
             case 3:
                  h=0;
                  g=0;
                   a=0;
                   i=1;
                do 
            {
                  printf("\nEscriba el nombre del alumno\n");
                  fflush(stdin);
                  gets(nom[i]);
                  printf("Escriba el promedio del alumno\n");
                  scanf("%i",&prom[i]);
                  a=a+prom[i];
                  i++;
             }while(i<=num);
            
                     break; 
                  
             
                 default:printf("Opcion no valida\n");break;
}

             
             res=a/num;
             
             printf("\n\nEl promedio de los alumnos es %d \n",res);
             printf("\nLos alumnos encuentran por arriba del promedio son :\n");
             printf("  Nombre          Calificacion  \n");
              for(i=1;i<=num;i++)
                 {
             if (prom[i]>res)
             printf("  %s                   %i\n",nom[i],prom[i]);
             if(prom[i]>=70)
             h++;
             if(prom[i]<70)
             g++;
                     }
             printf("\n\n%i alumnos APROBADOS\n",h);
             printf("\n%i alumnos REPROBADOS\n",g);
printf("\n\n1)Repetir programa\n2)Salir\n");
scanf("%i",&op);
}
while (op==1);

}
