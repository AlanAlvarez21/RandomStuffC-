/*
N.p Alan Daniel Alvarez Castro 
N.p ciclos 
F: 09/04/0216
d.p  la presipitacion flubial, el municipio, los estados de cada zona, su temperatura, promedio, zona mayor y menor de presipitacion*/



#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#define p printf
#define s scanf

main()
{
	int i=1,pp;
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
    
    char region_sierra_de_amula[10][50]={"Atengo","Chiquilistlán","Ejutla","El Grullo","El Limón","Juchitlán","Tecolotlán","Tenamaxtlán",
	 "Tonaya","Tuxcacuesco","Unión de Tula"};
	
	char region_costa_sur[6][50]={"Autlán de Navarro","Casimiro Castillo","Cihuatlán","Cuautitlán de García Barragán"."La Huerta",
	"Villa Purificación"}
	 
	char region_costa_norte[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtlán","San Sebastián del Oeste",
	"Talpa de Allende"}
	
    char region_sierra_occidental[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtlán","San Sebastián del Oeste",
	"Talpa de Allende"}

	char region_valles[14][50]={"Ahualulco de Mercado","Amatitán","Ameca","San Juanito de Escobedo","El Arenal","Cocula","Etzatlán",
	"Hostotipaquillo","Magdalena","San Marcos","San Martín de Hidalgo","Tala","Tequila","Teuchitlán"}              
	
	char region_centro[14][50]={"Acatlán de Juárez","Cuquío","El Salto","Guadalajara","Ixtlahuacán de los Membrillos",
	"Ixtlahuacán del Río","Juanacatlán","San Cristóbal de la Barranca","Tlajomulco de Zúñiga","Tlaquepaque","Tonalá","Villa Corona",
	"Zapopan","Zapotlanejo"}
		
	for (i=0;i<=9;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_norte[i]);
	s("%i",&pp);
    }
    for (i=0;i<=9;i++)
	{
	p("Ingresa la presipitacion pluvial %s\n",region_norte[i]);
	s("%i",&pp);
    }

	
	
	system("pause");
}
