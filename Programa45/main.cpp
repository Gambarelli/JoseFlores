#include <iostream>
#include <string>
#include <string.h>


using namespace std;

string cadena,insertado;

int main()
{
    cout<<"Ingresar la cadena: ";
    cin>>cadena;

    insertado=cadena.insert(1,"juan");
    cout<<"Valor de insertado: "<<insertado<<endl;
    string ree;
    ree=ree.replace(3,3,"Flores");
    cout<<"Valor ree "<<ree<<endl;

}
