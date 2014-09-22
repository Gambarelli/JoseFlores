#include <iostream>
#include <string.h>


using namespace std;

/*Elaborar un programa donde se ingrese una cadena de texto y luego
usando un procedimiento se sustituyan las vocales por X*/

char cadena[30];

void Ingresar()
{
    cout<<"Ingresar cadena de texto: ";
    cin.getline(cadena,30);
}

void cambiarvocales()
{
    for(int i=0;i<strlen(cadena);i++)
    {
        if((cadena[i]=='a') or (cadena[i]=='e') or (cadena[i]=='i') or (cadena[i]=='o') or (cadena[i]=='u'))
        {
            cadena[i]='X';
        }
    }


}

void presentar()
{
    for(int i=0;i<=strlen(cadena);i++)
    {

            cout<<cadena[i];

    }

}


int main()
{

Ingresar();
cambiarvocales();
presentar();

}
