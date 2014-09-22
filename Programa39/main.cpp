#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <strings.h>

using namespace std;
int const n=3;
int const nparcial = 3;

struct alumnos
{

    string nombre;
    int notasdeparcial[nparcial];
    double promedio;
    string observacion;

};

alumnos alumno[n];


void ingreso(alumnos alumno[],int n,int nparcial)
{
    int i,k;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresar el nombre del alumno: ";
        cin>>alumno[i].nombre;

        for(k=0;k<nparcial;k++)
        {
            cout<<"Ingresar el parcial: "<<k+1<<"  ";
            cin>>alumno[i].notasdeparcial[k];
        }
    }
}

double calpromedio(int parcial[],int nparcial)
{  int k;
     double suma=0;

    for(k=0;k<nparcial;k++)
        {
            suma+=parcial[k];
        }
     return suma/nparcial;
}

void calcular(alumnos alumno[],int n,int nparcial)
{
    int i;
    for (i=0;i<n;i++)
    {
        alumno[i].promedio=calpromedio(alumno[i].notasdeparcial,nparcial);
        if (alumno[i].promedio>60)
        {
            alumno[i].observacion="Aprobado";
        }
        else
        {
            alumno[i].observacion="Reprobado";
        }

    }
}


void presentar(alumnos alumno[],int n,int nparcial)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Alumno: "<<alumno[i].nombre<<endl<<" Promedio: "<<alumno[i].promedio<<endl<< "Observacion: "<<alumno[i].observacion<<endl;
        _flushall();
    }
}


int main()
{
    ingreso(alumno,n,nparcial);
    calcular(alumno,n,nparcial);
    presentar(alumno,n,nparcial);
}
