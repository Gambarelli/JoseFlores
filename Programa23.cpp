#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/* Ingresar un numero hasta que el usuario que no quiere ingresar mas numeros. */


int main()
{

    int num;
    char resp;
    int mayor=0;

    do
    {

        cout<<"Ingresar un numero:  ";
        cin>>num;

        _flushall();
        if (mayor<num)
        {
            mayor = num;
        }
        cout<<"Desea continuar:  ";
        cin.get(resp);

        do
        {
            cout<<"Desea Continuar:  ";
            cin.get(resp);_flushall();

        } while ((resp != 's') and (resp !='n'));


    } while (resp !='n');
    cout<<"El Numero Mayor es:  "<<mayor<<"\n";

}
