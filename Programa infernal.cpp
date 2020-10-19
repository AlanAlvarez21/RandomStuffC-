/*
N.p Alan Daniel Alvarez Castro 
d.p introducir 3 números
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
	char region_norte[10][50]={"Bolaños","Colotlán","Chimaltitán","Huejúcar","Huejuquilla el Alto","Mezquitic","San Martín de Bolaños",
	"Santa María de los Ángeles","Totatiche","Villa Guerrero"};
	
	char region_altos_norte[8][50]={"Encarnación de Díaz","Lagos de Moreno","Ojuelos de Jalisco","San Diego de Alejandría",
	"San Juan de los Lagos","Teocaltiche","Unión de San Antonio","Villa Hidalgo"};
	
	char region_altos_sur[12][50]={"Acatic","Arandas","Cañadas de Obregón","Jalostotitlán","Jesús María","Mexticacán","San Julián",
	"San Miguel el Alto","Tepatitlán de Morelos","Valle de Guadalupe","Yahualica de González Gallo","San Ignacio Cerro Gordo"};
	
	char region_cienega[13][50]={"Atotonilco el Alto","Ayotlán","Degollado","Jamay","La Barca","Ocotlán","Poncitlán","Tototlán", 
	"Zapotlán del Rey","Chapala","Jocotepec","Tuxcueca","Tizapan el Alto"};
	
	char region_sureste[10][50]={"Concepción de Buenos Aires","Jilotlán de los Dolores","La Manzanilla de la Paz","Santa María del Oro",
    "Mazamitla","Pihuamo","Quitupan","Tamazula de Gordiano","Tecalitlán","Valle de Juárez"};
    
    char region_sur[16][50]={"Amacueca","Atemajac de Brizuela","Atoyac","Zapotlán el Grande","Gómez Farías","Sayula","Tapalpa",
	"Techaluta de Montenegro","Teocuitatlán de Corona","Tolimán","Tonila","Tuxpan","San Gabriel","Zacoalco de Torres","Zapotiltic",
    "Zapotitlán de Vadillo"};
    
    char region_sierra_de_amula[11][50]= {"Atengo","Chiquilistlán","Ejutla","El Grullo","El Limón","Juchitlán","Tecolotlán","Tenamaxtlán",
	 "Tonaya","Tuxcacuesco","Unión de Tula"};
	
	char region_costa_sur[6][50]={"Autlán de Navarro","Casimiro Castillo","Cihuatlán","Cuautitlán de García Barragán","La Huerta",
	"Villa Purificación"};
	 
	char region_costa_norte[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtlán","San Sebastián del Oeste",
	"Talpa de Allende"};
	
    char region_sierra_occidental[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtlán","San Sebastián del Oeste",
	"Talpa de Allende"};

	char region_valles[14][50]={"Ahualulco de Mercado","Amatitán","Ameca","San Juanito de Escobedo","El Arenal","Cocula","Etzatlán",
	"Hostotipaquillo","Magdalena","San Marcos","San Martín de Hidalgo","Tala","Tequila","Teuchitlán"};            
	
	char region_centro[14][50]={"Acatlán de Juárez","Cuquío","El Salto","Guadalajara","Ixtlahuacán de los Membrillos",
	"Ixtlahuacán del Río","Juanacatlán","San Cristóbal de la Barranca","Tlajomulco de Zúñiga","Tlaquepaque","Tonalá","Villa Corona",
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
