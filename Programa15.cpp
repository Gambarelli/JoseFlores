#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
/* Generar 10 numeros y contar cuantos son divisibles entre 5,
el numero mayor y menor. numeros son generados entre 200 y 500.*/


int main()

{
    int numero,contador,mayor,menor,cd5;
    cd5=0;
    contador=0;
    srand(time(0));//Generar una nueva semilla cada vez

    mayor=0;
    menor=500;
    while (contador<10)
    {
       numero = 200 + rand()%(501-200);
        if (numero % 5 ==0)
        {
            cd5++;
        }
        if (numero>mayor)
        {
            mayor=numero;
        }
        if (numero<menor)
        {
            menor=numero;
        }
        cout<<cd5<<"--->"<<numero<<"\n";
        contador++;
    }
    cout<<"Numero divisbles entre 5:  "<<cd5<<"\n";
    cout<<"Menor "<<menor<<"\n";
    cout<<"Mayor "<<mayor<<"\n";



}
