#include <iostream>
#include <stdlib.h>
//Ingresar el nombre del empleado y las ventas, luego determinar el porcentaje de comision usando el turno de trabajo,
//el seguro social usando la comision y el total a pasgar.

/*
    Turno       por comision
    1            6%
    2            8%

Si el salario(Comision) es mayor a 7000 la deduccion es de
245 y sino es de 0.035% del salario.
el total a pagar es el ingreso (comision) - el ihss

*/

using namespace std;

int main()
{
    int horas,turno;
    char nombre[30];
    double ventas,comis,ihss,tp;

    cout<<"Nombre del empleado:";
    cin.getline(nombre,30);

    cout<<"ventas...:";
    cin>>ventas;

    cout<<"Turno....";
    cin>>turno;

    if (turno==1) /*Cuando se compara el signo igual e la condicion, es doble*/
{


        comis=0.06 * ventas;}

    else
    {


            comis=0.08 * ventas;
    }
    if (comis\>7000)
    {


        ihss=245;}


    else
        {


        ihss=0.035*comis;
        }
    tp= comis - ihss;
    cout<<"Comision"<<comis <<"\n";
    cout<<"ihss"<< ihss<<"\n";
    cout<<"total a pagar"<< tp<<"\n";



}
