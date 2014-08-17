#include <iostream>

using namespace std;

/* Ingresar 5 numeros y contar cuantos son pares e impares.
*/

int main()
{
    int num,cpar,cimpar;
    int conta=0;
    cpar=0;cimpar=0;

    while (conta<5)
    {
        cout<< "Ingrese el numero:  "
        cout<<endl;
        cin>>num;

        conta++;

        if (num%2==0)
            cpar++;
        else
            cimpar++;

    }

    cout<<"Numeros pares:  "<<cpar<<endl;
    cout<<"Numeros impares:  "<<cimpar<<endl;

}
