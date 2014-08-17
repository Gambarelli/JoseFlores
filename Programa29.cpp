#include <iostream>

using namespace std;
struct empleado
{
    char nombre[30];
    int horas,turno; //1,2,3
    double pxh,pagobruto;

};

empleado emple; //empleado es el tipo de variable asi como INT, y emple la variable.


int main()
{
  cout<<"Ingresar el nombre: ";
  cin.getline(emple.nombre,30);

  cout<<"Ingresar horas: ";
  cin>>emple.horas;

  do
  {
     cout<<"Ingresar el turno (1,2,3): ";
     cin>>emple.turno;
  }  while (!(emple.turno>=1) and !(emple.turno<=3));

    switch (emple.turno)
    {
      case 1:
        emple.pxh=90;
        break;
      case 2:
        emple.pxh=100;
        break;
      case 3:
        emple.pxh=130;
        break;
    };

    emple.pagobruto=emple.pxh * emple.horas;

    cout<<"Pago por hora: "<<emple.pxh<<"\n";
    cout<<"Total pagar: "<<emple.pagobruto<<"\n";

}
