#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

/*
Se tiene que buscar una cadena dentro de otra cadena y
luego sustituir la cadena por X donde la encuentre.

*/

string cadena1,cadena2,com1;
  string x;
  int bandera=0;

void cambio(int largo,int largo2)
{
    int i=0;

    for (i=0;i<largo;i++)
    { com1 =cadena1.substr(i,largo2);
       if (com1==cadena2)
        {
          for(int k=i;k<largo2+i;k++)
          {
              x=cadena1.replace(k,1,"x");


          }

              bandera=1;
              break;
        }
    }
}

void presentar()
{
    if (bandera==1)
    {
        cout<<" Cadena encontrada "<<com1<<"\n";
        cout<<x<<endl;
    }
    else
    {
        cout<<"No Se encontro cadena "<<"\n";
    }
}

void Ingreso(int &largo,int &largo2)
{

    cout<<"Ingrese su cadena de texto: ";
    getline(cin,cadena1,'\n');
       cout<<cadena1<<"\n";

    cout<<"Sub cadena que queremos encontrar: ";
    cin>>cadena2;
    largo= cadena1.size();
    cout<<largo<<endl;
    largo2= cadena2.size();
    cout<<largo2<<endl;
}

int main()

{

    int largo,largo2;

    Ingreso(largo,largo2);
    cambio(largo,largo2);
    presentar();


}
