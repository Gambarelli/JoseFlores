#include <iostream>
#include <stdlib.h>
using namespace std;


  /*Ingresar las horas trabajadas y el pago por hora del empleado luego determinar su pago de horas,
  la deduccion del rap que es el 1.5% del ingreso, presentar el total a pagar.
  */


int main()
{
    int horas,pxh,phoras,rap,totalpn;
        cout<<"Ingresar las horas trabajadas:";
        cin>>horas;

        cout<<"Ingresar el pago por hora:";
        cin>>pxh;

        phoras = pxh * horas;

        rap = phoras * 0.015;
        totalpn = phoras - rap;

        cout<<"rap:"<<rap<<"\n";
        cout<<"Total a pagar"<<totalpn<<"\n";
        cout<<"pago de horas"<<phoras<<"\n";

        system("PAUSE");

}
