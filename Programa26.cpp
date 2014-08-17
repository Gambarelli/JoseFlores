#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/* Ingresar el nombre del empleado, las horas de 4 dias trabajados,
(Usar un ciclo for para ingresar las 4 horas), luego se debera de presentar el total de las horas,
se determina el pago por hora usando la zona de trabajo.
Zona    Pago
A        150
B        200
C        250
Determinar el salario, ihss y total a pagar.
Preguntar si desea continuar (validar respuesta)


si ihss>7000 = 254
 si no es ihss = 0.035 * comision


 */


int main()
{   int horas,dia,totalh=0,salario,ihss,totalPago,pago;
    char nombre [30],zona,respuesta;

do{
    cout<<"Bienvenido!"<<"\n";
    cout<<"Ingrese el nombre del empleado:  ";
    cin.getline(nombre,30);

    for (dia=0;dia<4;dia++)
        {
            cout<<"Ingrese las horas trabajadas en el dia "<<dia+1<<"\n";
            cin>>horas;
        totalh=horas + totalh;

        }

      _flushall();
    do{
        cout<<"Ingrese la zona en la que trabajo:  ";
        cin>>zona;
        _flushall();

    } while ((zona != 'A') and (zona != 'B') and (zona != 'C'));

    switch (zona)
    {case 'A':
        pago=150;
        break;
    case 'B':
        pago = 200;
        break;
    case 'C':
        pago=250;
        break;
    }

    salario=pago*totalh;
    if (salario>7000)
      {
    ihss=245;
      }
    else
    {
    ihss = salario * 0.035;
    }
    totalPago= salario-ihss;

    cout<<"Salario: "<<salario<<"\n";
    cout<<"ihss: "<<ihss<<"\n";
    cout<<"Total a pagar: "<<totalPago<<"\n";

        cout<<"Desea continuar el programa?: ";
        cin.get(respuesta);

      _flushall();
}while ((respuesta !='N'));

}
