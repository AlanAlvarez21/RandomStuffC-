#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#define s scanf
#define p printf

using namespace std;

int main()
{ 
    int real,con=1,a=0,b=0,pos=0,ne=0,rpar=0,rimp=0,rpos=0,rne=0,op;

    
                p("\nIngrese con que ciclo desea ejecutar la funcion\n\n 1)Ciclo For\n 2)Ciclo While\n 3)Ciclo Do-While\n");
                     s("%i",&op);
                     switch(op)
					 
                     {
                case 1:
                     for( ;con<=50;con++)
                     {p("Ingrese un valor: \n");
                      s("%i",&real);
             if(real%2==0)
             {
                rpar=rpar+real;
                a++;
             }
               if(real%2!=0)
               { 
                rimp=rimp+real;
                b++;
                }
               if(real>0)
               {
               rpos=rpos+real;
                pos++;
                }
               if (real<0)
               {
                rne=rne+real;
                ne++;
               }
               } p("Existen %i numeros pares\n",a);
    p("Existen %i numeros impares\n",b);
    p("Existen %i numeros positivos\n",pos);
    p("Existen %i numeros negativos\n",ne);
    p("El resultado de la suma de los numeros pares es %i\n",rpar);
    p("El resultado de la suma de los numeros impares es %i\n",rimp);
    p("El resultado de la suma de los numeros positivos es %i\n",rpos);
    p("El resultado de la suma de los numeros negativos es %i\n",rne);
    break;
    case 2:
    
             while(con<=50)
           {
               p("Ingrese un valor: \n");
               s("%i",&real);
                con++;
               if(real%2==0)
             {
                rpar=rpar+real;
                a++;
             }
               if(real%2!=0)
               { 
                rimp=rimp+real;
                b++;
                }
               if(real>0)
               {
               rpos=rpos+real;
                pos++;
                }
               if (real<0)
               {
                rne=rne+real;
                ne++;
               }
             }
    
    p("Existen %i numeros pares\n",a);
    p("Existen %i numeros impares\n",b);
    p("Existen %i numeros positivos\n",pos);
    p("Existen %i numeros negativos\n",ne);
    p("El resultado de la suma de los numeros pares es %i\n",rpar);
    p("El resultado de la suma de los numeros impares es %i\n",rimp);
    p("El resultado de la suma de los numeros positivos es %i\n",rpos);
    p("El resultado de la suma de los numeros negativos es %i\n",rne);
    break;
    case 3:
         do{ p("Ingrese un valor: \n");
               s("%i",&real);
                con++;
               if(real%2==0)
             {
                rpar=rpar+real;
                a++;
             }
               if(real%2!=0)
               { 
                rimp=rimp+real;
                b++;
                }
               if(real>0)
               {
               rpos=rpos+real;
                pos++;
                }
               if (real<0)
               {
                rne=rne+real;
                ne++;
               }}while(con<=50);
               p("Existen %i numeros pares\n",a);
    p("Existen %i numeros impares\n",b);
    p("Existen %i numeros positivos\n",pos);
    p("Existen %i numeros negativos\n",ne);
    p("El resultado de la suma de los numeros pares es %i\n",rpar);
    p("El resultado de la suma de los numeros impares es %i\n",rimp);
    p("El resultado de la suma de los numeros positivos es %i\n",rpos);
    p("El resultado de la suma de los numeros negativos es %i\n",rne);
    break;
}
    

    system("PAUSE");
    return EXIT_SUCCESS;
}
