#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/*120-150-180*/
//1 120
//2 150
//3 190



using namespace std;

struct empleado
{
    char nombre[30];
    int horas,turno;
    double pb,ihss,tp;
};

int const n=5;
empleado emple[n];

void ingreso(empleado emple[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingresar Nombre del empleado ";
        cin.getline(emple[i].nombre,30);
        cout<<"Horas trabajadas:  ";
        cin>>emple[i].horas;
        do
        {  cout<<"Turno de trabajo: ";
           cin>>emple[i].turno;

        }while (!((emple[i].turno>=1) and (emple[i].turno<=3)));
        _flushall();
    }
}
double seguro(double pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035 * pb;
}


double pagoxhora(int turno)
{
    switch (turno)
     {
    case 1:
        return  120;
        break;
    case 2:
        return 150;
        break;
    case 3:
        return 180;
        break;
     }

}

void calcular (empleado emple[])
{
    int i;
    for (i=0;i<n;i++)
    {
        emple[i].pxh=pagoxhora(emple[i].turno)
        emple[i].pb=emple[i].pxh*emple[i].horas:horas;
        emple[i].ihss=seguro(emple[i].pb);
        emple[i].tp = emple[i].pb-emple[i].ihss;
    }
}

void presentar (empleado emple[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Empleado: "<<emple[i].nombre<<endl;
        cout<<"Pago por hora: "<<emple[i].pxh<<endl;
        cout<<"Pago bruto: "<<emple[i].pb<<endl;
        cout<<"Ihss: "<<emple[i].ihss<<endl;
        cout<<"Total pagar: "<<emple[i].tp<<endl;
    }


}


int main()
{
    ingreso(emple,n);
    calcular(emple,n);
    presentar(emple,n);

}
