/*
N.p Alan Daniel Alvarez Castro 
d.p introducir d+ia y mes e nacimient y determinar signo zodiacal 
F: 09/04/0216

 */

#include "stdio.h"
#include "stdlib.h"
#define p printf
#define s scanf

main()
{
    int mes, dia;
 
    p("Cual es tu mes de nacimienro?");
    s("%i",&mes);
    p("Cual es tu dia de nacimiento?");
    s("%i",&dia);
    system("cls");
    switch(mes)
    {

        case 1:if(dia<21)p(" tu simbolo zodiacal es: Capricornio");
        else p(" tu simbolo zodiacal es Acuario");
        break;
        case 2:if(dia<21)p(" tu simbolo zodiacal es: Acuario");
        else p(" tu simbolo zodiacal es: Piscia");
        break;
        case 3:if(dia<21)p(" tu simbolo zodiacal es: Piscis");
        else p(" tu simbolo zodiacal es: Aries");
        break;
        case 4:if(dia<21)p(" tu simbolo zodiacal es: Aries");
        else p(" tu simbolo zodiacal es: Tauro");
        break;
        case 5:if(dia<21)p(" tu simbolo zodiacal es: Tauro");
        else p(" tu simbolo zodiacal es: Geminis");
        break;
        case 6:if(dia<21)p(" tu simbolo zodiacal es: Geminis");
        else p(" tu simbolo zodiacal es: Cancer");
        break;
        case 7:if(dia<21)p(" tu simbolo zodiacal es: Cancer");
        else p(" tu simbolo zodiacal es: Leo");
        break;
        case 8:if(dia<21)p(" tu simbolo zodiacal es: Leo");
        else p(" tu simbolo zodiacal es: Virgo");
        break;
        case 9:if(dia<21)p(" tu simbolo zodiacal es: Virgo");
        else p(" tu simbolo zodiacal es: Libra");
        break;
        case 10:if(dia<21)p(" tu simbolo zodiacal es: Libra");
        else p(" tu simbolo zodiacal es: Escorpion");
        break;
        case 11:if(dia<21)p(" tu simbolo zodiacal es: Escorpion");
        else p(" tu simbolo zodiacal es: Sagitario");
        break;
        case 12:if(dia<21)p(" tu simbolo zodiacal es: Sagitario");
        else p(" tu simbolo zodiacal es: Capricornio");
        break;
        default:p("Mes incorrecto");
    } 
    
    system("pause");
}

