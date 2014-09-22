#include <iostream>
#include <stdio.h>
#include <string.h>


using namespace std;

char cadena[30];

void Ingresar()
{
    cout<<"Ingresar cadena de texto: ";
    cin.getline(cadena,30);
}

void presentar(char cadena[])
{
    for(int i=0;i<=strlen(cadena);i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<cadena[k];
        }
        cout<<endl;
    }

}

void presentar2()
{
    for(int i=strlen(cadena);i>=0;i--)
    {   for(int k=0;k<i;k++)
          {
            cout<<cadena[k];
          }
        cout<<endl;
    }
}

int main()
{
    Ingresar();
    presentar(cadena);
    cout<<endl;
    presentar2();



}
