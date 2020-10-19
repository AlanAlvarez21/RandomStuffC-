/*
N.p Alan Daniel Alvarez Castro 
N.p promedio temperatura 
F: 09/04/0216

 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int contador, limite_alumnos, opcion, rest, promedio, calificacion[40];
    char alumnos[40][50];
    do
    {
        system("cls");
        printf("Que ciclo repetitivo deseas usar?\n1-For\n2.-While\n3.-Do While\n");
        scanf("%i",&opcion);
        printf("Cuantos alumnos quieres?");
        scanf("%i",&limite_alumnos);
        printf("Cuanto es el promedio limite a pasar?\n");
        scanf("%i",&promedio);
        system("cls");
        switch(opcion)
        {
            case 1:
            for(contador=1;contador<=limite_alumnos;contador++)
            {
                printf("Ingresa el alumno %i : ", contador);
                fflush(stdin);gets(alumnos[contador]);
                printf("Ingresa su Promedio: ");
                scanf("%i",&calificacion[contador]);
            }
            break;
            case 2:contador=0;
            while(contador<=limite_alumnos)
                {
                    printf("Ingresa el alumno %i : ", contador);
                    fflush(stdin);gets(alumnos[contador]);
                    printf("Ingresa su Promedio: ");
                    scanf("%i",&calificacion[contador]);
                    contador++;
                }
            break;
            case 3:contador=1;
            do
                {
                    printf("Ingresa el alumno %i : ", contador);
                    fflush(stdin);gets(alumnos[contador]);
                    printf("Ingresa su Promedio: ");
                    scanf("%i",&calificacion[contador]);
                    contador++;
                }while(contador<=limite_alumnos);
            break;
            default:printf("No se podra realizar ninguna operacion porque Elegiste la opcion incorrecta\n");
            break;
        }
        system("cls");
        for(contador=1;contador<=limite_alumnos;contador++)
        {
            if(calificacion[contador]>=promedio)printf("El alumno %i es: %s y su promedio es de: %i\n", contador, alumnos[contador], calificacion[contador]);
        }
        printf("Desea reiniciar? presione 0 para reiniciar....");
        scanf("%i",& rest);
    }while(rest<=0);
    getch();
} 
