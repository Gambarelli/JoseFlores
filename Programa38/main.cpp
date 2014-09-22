#include <iostream>
#include <stdio.h>
using namespace std;

/*Ingresar 5 alumnos a un registro con os siguientes datos nombre, p1,p2, promedio.

usando un procedimiento ingresar el nombre y las notas.
Usar una funcion para calcular el promedio de un alumnno.
Usar un procedimiento para calcular los promedios de todos los alumnos.
Usar una funcion para devolver el mejor alumno de todo el arreglo.
Elaborar un procedimiento para presentar un alumno.
Elaborar un procedimiento para presentar todos los alumnos.
*/

struct alumnos
{
    char nombre[30];
    int p1,p2,promedio;

};

const int n=5;

alumnos alumno[n];
alumnos mejoralumnox;

void Ingresar(alumnos [],int n)
{ int i;
    for(i=0;i<n;i++)
    {
       cout<<"Ingresar Nombre del alumnos ";
        cin.getline(alumno[i].nombre,30);
        cout<<"Nota del parcial 1:  ";
        cin>>alumno[i].p1;
        cout<<"Nota del parcial 2:  ";
        cin>>alumno[i].p2;
        _flushall();
    }
}

int promedio(int p1,int p2)
{   int promedio;
    {
        promedio=(p1+p2)/2;
    }
   return promedio;
}

void tpromedios(alumnos alumno[], int n)
{   int i;
    for(i=0;i<n;i++)
    {
        alumno[i].promedio=promedio(alumno[i].p1,alumno[i].p2);
    }
}

alumnos mejoralumno(alumnos alumno[],int n)
{  int i;
    alumnos mayor;
    mayor = alumno[0];
    for (i=0;i<n;i++)
    {
        if (mayor.promedio<alumno[i].promedio)
            mayor=alumno[i];

    }return mayor;
}

void presentar_uno(alumnos alumno)
{
    cout<<"Nombre del alumno: "<<alumno.nombre<<endl;
    cout<<"Nota del parcial 1: "<<alumno.p1<<endl;
    cout<<"Nota del parciaa 2: "<<alumno.p2<<endl;
    cout<<"Promedio del alumno: "<<alumno.promedio<<endl;
}

void presentacion(alumnos [], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        presentar_uno(alumno[i]);
    }
}


int main()
{
    Ingresar(alumno,n);
    tpromedios(alumno,n);
    presentacion(alumno,n);
    cout<<endl;
    cout<<"El mejor alumno es: "<<endl;
    presentar_uno(mejoralumno(alumno,n));

}
