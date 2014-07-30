#include <iostream>

using namespace std;
/* meses 1,3,5,7,8,10,12 son de 31 dias
   meses 4,6,9,11
   febrero, 2 = 28

   Ingresar el mes , el día , el año y determinar si la fecha esta correcta.

   se tiene que validar si el mes esta correcto, si el día corresponde al mes y si el año es mayor a cero.
*/

int main()
{   int dia,mes,anio;


    cout<<"Ingresar el mes: ";
    cin>>mes;
    cout<<"Ingrese el dia: ";
    cin>>dia;
    cout<<"ingrese el anio ";
    cin>>anio;

  if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
    if(dia>0&&dia<=31&&anio>0)
    cout<<"Fecha Correcta "<<endl;
    else
    cout<<"Fecha Incorrecta"<<endl;
    }
    else if(mes==4||mes==6||mes==9||mes==11)
        {if(dia>0&&dia<=30&&anio>0)
    cout<<"Fecha Correcta "<<endl;
    else
    cout<<"Fecha Incorrecta"<<endl;}

    else if(mes==2)

    {if(dia>0&&dia<=28&&anio>0)
    cout<<"Fecha Correcta "<<endl;
    else
    cout<<"Fecha Incorrecta"<<endl;}
    else
    cout<<"Fecha Incorrecta"<<endl;


}
