/*Np:Alan Daniel Alvarez Castro */
/*Nombre del Programa: For, while y do while */
/*Fecha: 16/03/16 */
/*Dp: Decir numeros impares */

#include "stdio.h"
#include "stdlib.h"

main()
{
int i ,a,N1,N2,OP,repe;
do
	{
	system("cls");
	printf("entre que numero quieres los impares y su suma:\n");
	scanf("%i %i",&N1,&N2);
	printf("Con que ciclo lo quiere: \n 1=for\n 2=while\n 3=do while\n");
	scanf("%i",&OP);
		
switch(OP)
	{
	case 1: a=0;
		for(i=N1;i<=N2;i++)	
		if(i%2!=0)
		{
		printf("%i ",i);
		a=a+i;
		}
		break;
		
	case 2: i=N1;a=0;
		while(i<=N2)
         		{
	    	if(i%2!=0)
	    	{
    		printf("%i ",i);
    		a=a+i;		    		
		}
		i++;
		}
		break;
		
	case 3: i=N1;a=0;
	do
	          {
	       	if(i%2!=0)
	       	{
		printf("%i ",i);
		a=a+i;
		}
		i++;
		}
	          while(i<=N2);
	          break;
			   
	default: printf("\n no existe ese ciclo");
	}
printf("\n las suma de los numeros impares entre %i y %i = %i\n",N1,N2,a);
printf("\n Deseas hacer otro ciclo: 1 = si ");    
scanf("%i",&repe);
}
while(repe==1);
}
