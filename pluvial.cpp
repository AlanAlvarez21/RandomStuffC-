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
    
    char region_sierra_de_amula[10][50]={"Atengo","Chiquilistl�n","Ejutla","El Grullo","El Lim�n","Juchitl�n","Tecolotl�n","Tenamaxtl�n",
	 "Tonaya","Tuxcacuesco","Uni�n de Tula"};
	
	char region_costa_sur[6][50]={"Autl�n de Navarro","Casimiro Castillo","Cihuatl�n","Cuautitl�n de Garc�a Barrag�n"."La Huerta",
	"Villa Purificaci�n"}
	 
	char region_costa_norte[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtl�n","San Sebasti�n del Oeste",
	"Talpa de Allende"}
	
    char region_sierra_occidental[8][50]={"Atenguillo","Ayutla","Cuautla","Guachinango","Mascota","Mixtl�n","San Sebasti�n del Oeste",
	"Talpa de Allende"}

	char region_valles[14][50]={"Ahualulco de Mercado","Amatit�n","Ameca","San Juanito de Escobedo","El Arenal","Cocula","Etzatl�n",
	"Hostotipaquillo","Magdalena","San Marcos","San Mart�n de Hidalgo","Tala","Tequila","Teuchitl�n"}              
	
	char region_centro[14][50]={"Acatl�n de Ju�rez","Cuqu�o","El Salto","Guadalajara","Ixtlahuac�n de los Membrillos",
	"Ixtlahuac�n del R�o","Juanacatl�n","San Crist�bal de la Barranca","Tlajomulco de Z��iga","Tlaquepaque","Tonal�","Villa Corona",
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
