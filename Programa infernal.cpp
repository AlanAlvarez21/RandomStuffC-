/*
N.p Alan Daniel Alvarez Castro 
d.p introducir 3 n�meros
F: 09/04/0216
d.p la presipitacion plubial, el municipio, los estados de cada zona,  promedio, zona mayor y menor de presipitacion*/
#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define p printf
#define s scanf

main()
{
	int i=1,a,h,g,prom,jalisco;
	int pp[130];
	char region_norte[10][50]={"Bola�os","Colotl�n","Chimaltit�n","Huej�car","Huejuquilla el Alto","Mezquitic","San Mart�n de Bola�os",
	"Santa Mar�a de los �ngeles","Totatiche","Villa Guerrero"};
	
	char region_altos_norte[8][50]={"Encarnaci�n de D�az","Lagos de Moreno","Ojuelos de Jalisco","San Diego de Alejandr�a",
	"San Juan de los Lagos","Teocaltiche","Uni�n de San Antonio","Villa Hidalgo"};
	
	char region_altos_sur[12][50]={"Acatic","Arandas","Ca�adas de Obreg�n","Jalostotitl�n","Jes�s Mar�a","Mexticac�n","San Juli�n",
	"San Miguel el Alto","Tepatitl�n de Morelos","Valle de Guadalupe","Yahualica de Gonz�lez Gallo","San Ignacio Cerro Gordo"};
	
	char region_cienega[13][50]={"Atotonilco el Alto","Ayotl�n","Degollado","Jamay","La Barca","Ocotl�n","Poncitl�n","Tototl�n", 
	"Zapotl�n del Rey","Chapala","Jocotepec","Tuxcueca","Tizapan el Alto"};
	
	char region_sureste[10][50]={"Concepci�n de Buenos Aires","Jilotl�n de los Dolores","La Manzanilla de la Paz","Santa Mar�a del Oro",
    "Mazamitla","Pihuamo","Quitupan","Tamazula de Gordiano","Tecalitl�n","Valle de Ju�rez"};
    
    char region_sur[16][50]={"Amacueca","Atemajac de Brizuela","Atoyac","Zapotl�n el Grande","G�mez Far�as","Sayula","Tapalpa",
	"Techaluta de Montenegro","Teocuitatl�n de Corona","Tolim�n","Tonila","Tuxpan","San Gabriel","Zacoalco de Torres","Zapotiltic",
    "Zapotitl�n de Vadillo"};
    
    char region_sierra_de_amula[11][50]= {"Atengo","Chiquilistl�n","Ejutla","El Grullo","El Lim�n","Juchitl�n","Tecolotl�n","Tenamaxtl�n",
	 "Tonaya","Tuxcacuesco","Uni�n de Tula"};
	
	char region_costa_sur[6][50]={"Autl�n de Navarro","Casimiro Castillo","Cihuatl�n","Cuautitl�n de Garc�a Barrag�n","La Huerta",
	"Villa Purificaci�n"};
	 
	char region_costa_norte[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtl�n","San Sebasti�n del Oeste",
	"Talpa de Allende"};
	
    char region_sierra_occidental[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtl�n","San Sebasti�n del Oeste",
	"Talpa de Allende"};

	char region_valles[14][50]={"Ahualulco de Mercado","Amatit�n","Ameca","San Juanito de Escobedo","El Arenal","Cocula","Etzatl�n",
	"Hostotipaquillo","Magdalena","San Marcos","San Mart�n de Hidalgo","Tala","Tequila","Teuchitl�n"};            
	
	char region_centro[14][50]={"Acatl�n de Ju�rez","Cuqu�o","El Salto","Guadalajara","Ixtlahuac�n de los Membrillos",
	"Ixtlahuac�n del R�o","Juanacatl�n","San Crist�bal de la Barranca","Tlajomulco de Z��iga","Tlaquepaque","Tonal�","Villa Corona",
	"Zapopan","Zapotlanejo"};
		a=0;h=0; g=0;
	    for (i=0;i<=9;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_norte[i]);
	s("%i",&pp[i]);
    a=a+pp[i];
    }
    system("cls");
     for (i=0;i<=7;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_altos_norte[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=11;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_altos_sur[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=12;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_cienega[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=9;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_sureste[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=15;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_sur[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=10;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_sierra_de_amula[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=5;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_costa_sur[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=7;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_costa_norte[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=7;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_sierra_occidental[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=13;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_valles[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    for (i=0;i<=13;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_centro[i]);
	s("%i",&pp[i]);
	a=a+pp[i];
    }
    system("cls");
    
    prom=a/130;
    jalisco=prom*a;
             p("El promedio de la presipitacion pluvial: %d\n",prom);
             p("La presipitacion pluvial del estado de jalisco es: %i ",jalisco);
             p("\nLas regiones que se encuentran por arriba del promedio son :\n");
             p("  Municipio          Presipitacion pluvial \n");
                     for(i=1;i<=10;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_norte[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
                     for(i=1;i<=8;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_altos_norte[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=12;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_altos_sur[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=13;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_cienega[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=10;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_sureste[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=16;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_sur[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=11;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_sierra_de_amula[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=6;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_costa_sur[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=8;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_costa_norte[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=8;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_sierra_occidental[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=14;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_valles[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
					 for(i=1;i<=14;i++)
                 {
             if (pp[i]>prom)
             p("  %s                   %i\n",region_centro[i],pp[i]);
             if(pp[i]>=prom)
             h++;
             if(pp[i]<prom)
             g++;
                     }
             p("\n\n%i Municipios por arriba del promedio\n",h);
             p("\n%i Municipios por debajo del promedio\n",g);
    
    

    
    
    
	system("pause");
}
