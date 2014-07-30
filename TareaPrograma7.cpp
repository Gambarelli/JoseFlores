#include <iostream>

using namespace std;
/*
Ingresar el nombre del empleado, las ventas y el turno
luego calcular el % de comision,ihss, y total a pagar
turno     % de comision
1               5%
2               7%
3               9%
*/

int main()
{ char nombre[30];
  double ventas, comis,ihss,pc,tp;
  int turno;

  cout<<"Ingrese el nombre del empleado: ";
  cin>>nombre;

  cout<<"Ingrese cuanto vendio: ";
  cin>>ventas;

  cout<<"Ingrese el turno del empleado: ";
  cin>>turno;

  if (turno==1)
    comis=0.05;
  if (turno==2)
    comis=0.07;
  if (turno==3)
    comis=0.09;


}
