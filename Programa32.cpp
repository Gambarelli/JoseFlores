#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/* Generar un numero entre 1-100 usando una funcion,
luego elaborar una funcion que nos devuelva la respuesta validando de s o N.
Pedir los numeros y presentar la suma.
*/

using namespace std;

int num,suma,mayor;
char resp;

int aleatorio1_100()
{
    int numx;
    srand(time(0));
    numx=1+rand()%(101-1);
    return numx;
}

char pedirrespuesta()
{
    char respx;
        do
        {
            cout<<"Desea continuar: ";
            cin.get(respx);
            _flushall();
        }while ((respx !='s') and respx!='n');
        return respx;
}

void sumanum(int num, int &suma)
{
    suma +=num;
}

int maximo(int num,int mayor)
{
    if (num>mayor)
        return num;
    else
        return mayor;
}


int main()
{   suma=0;
   do{ num=aleatorio1_100();
   cout<<"Numero generado es: "<<num<<endl;

   resp=pedirrespuesta();
    sumanum(num,suma);
    mayor = maximo(num,mayor);

   }while (resp!='n');
    cout<<"Suma de los numeros es: "<<suma<<endl;
    cout<<"Mayor es: "<<mayor<<endl;

}
