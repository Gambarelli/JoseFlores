#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Comparacion de cadenas


using namespace std;

const int t=4;
char nombre[t][30];
int num[t];

void ingresocadenas(char nombre[t][30])
{
    for(int i=0;i<=t;i++)
    {
        cout<<"Ingresar el nombre: ";
        cin.getline(nombre[i],30);
    }

}


int contar (char nombre[])
{
    int c=1;
    for(int k=0;k<strlen(nombre);k++)
    {

        if(nombre[k]==' ')
            {if(nombre[k-1]!=' ')
            {c++;}
            }

        }


    return c;

}

void contarpalabras (char nombre[t][30])
{
    int conta=0;
    for(int i=0;i<=t;i++)
    {
        conta=contar(nombre[i]);
        cout<<nombre[i]<<" Tiene "<<conta<<" Palabras"<<endl;

    }
}

void Comparar2(char nombre [t][30])
{


    char cadcompa[30];
    cout<<"Ingresar cadena a comparar ";
    cin.getline(cadcompa,30);

    for(int i=0;i<=t;i++)
    {
     if(strcmp(nombre[i],cadcompa)==0)
     {
         cout<<"Comparacion correcta con "<<nombre[i]<<endl;
     }
    }
}

int main()
{
    ingresocadenas(nombre);
    contarpalabras(nombre);
    Comparar2(nombre);
    cout<<endl<<"Otro Tipo de Comparacion"<<endl;
}


