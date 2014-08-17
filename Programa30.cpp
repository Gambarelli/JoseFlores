#include <iostream>

using namespace std;

/* Crear un registro con los campos de nombre, na,ne,nf.

luego calcular la nf y presentar la observacion.

validar que cada una el acumulado este entre 0-40 y la nota examen entre 1-60.
*/

struct Registro
{
   int nacumulado, nexamen,nfinal;
   char nombre[30];
};

Registro registro;

int main()
{
    do
    {   cout<<"Ingrese la nota de acumulado: ";
        cin>>registro.nacumulado;

        cout<<"Ingrese la nota del examen: ";
        cin>>registro.nexamen;


    } while (!((registro.nacumulado>=0) and (registro.nacumulado<=40)) and !((registro.nexamen>=1) and (registro.nexamen<=60)));

cout<<"Nota Final: "<<registro.nacumulado+registro.nexamen<<endl;

    if (registro.nacumulado+registro.nexamen>=60)
        cout<<"El estudiante paso su clase";
        else
        cout<<"El estudiante se aplazo!";

}
