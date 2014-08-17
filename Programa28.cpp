#include <iostream>

using namespace std;
/*Ingresar 5 numeros pares y presentar el mayor */


int main()
{
  int numero;
  int mayor=0;
  int i;
  for (i=0;i<5;i++)
  {
     do {
     cout<<"Ingrese un numero par : "<<endl;
     cout<<i+1<<" "; cin>>numero;

     } while (!(numero%2==0))4;

    if (numero>mayor)
            numero=mayor;

  }

    cout<<"El mayor es: :"<<mayor<<endl;
    cout<<endl;



}
