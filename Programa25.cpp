#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/* Ingresar el nombre del empleado, las ventas del mes y el turno
de trabajo (1,2,3 validarlo), luego determinar el % de comision usando
el turno.
turno   %Comision
1           5%
2           6%
3           7%
*/

using namespace std;

int main()
{
    char nombre[30];
    char respuesta;
    int turno;
    double comision,pc,ventas;

    do {
        cout<< "ingresar el nombre del empleado :";
        cin.getline(nombre,30);
        cout<<"Ventas del mes:  ";
        cin>>ventas;


        do
        {
            cout<<"Turno de trabajo:  ";
            cin>>turno;
        } while
        (!((turno>=1) and (turno<=3)));

        switch (turno)
        {
            case 1:
                pc=0.05;
                break;
            case 2:
                pc=0.06;
            case 3:
                pc=0.07;
                break;
        }
        comision= ventas*pc;
        _flushall();
        cout<<"% de Comision: "<<pc<<"\n";
        cout<<"Comision Ganada: "<<comision<<"\n";

        do
        {
            cout<<"Desea Continuar:  ";
            cin.get(respuesta);
                _flushall();
        } while ((respuesta!='S') and (respuesta!='N'));

    }while (respuesta!='N');


}


