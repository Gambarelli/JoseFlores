#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
//Generar 10 numeros aleatorios.

int main()
{
    int num,mayor;
    int conta=0;
    mayor=0;
    srand(time(0));//Generar una nueva semilla
    cout<<"Numero Aleatorios"<<"\n";

    while (conta<10)
    {

        num=1 + rand()%(100);
        //num = 30 + rand()%(41-30);
        cout<<num<<"\n";
        conta++;
    if (num>mayor)
    {

        mayor= num;

    }

    }
cout<<"Numero mayor es:  "<<mayor<<"\n";

}
