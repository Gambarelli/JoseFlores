#include <iostream>
#include <stdlib.h>
using namespace std;

 //ingresar la nota acumulada y examen, luego determinar la nota final y la observacion (reprobado o aprobado)

int main()
{   int na,ne,nf;
    char nombre[30];

    cout<<"Nombre del alumno...:";

    cin.getline(nombre,30);

    cout<<"nota acumulada....:";
    cin>>na;

    cout<<"Nota Examen......:";
    cin>>ne;

    nf = na + ne;

    cout<<"Nota Final es :"<<nf<<"\n";
    if (nf>=60)
       {cout<<"aprobado";}
     else
            {cout<<"reprobado";}

        cout<<"\n";
        system("PAUSE");
}
