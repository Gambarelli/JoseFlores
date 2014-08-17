#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <strstream>

using namespace std;

//se utilizo string en vez de char, para que se pudiera presentar el nombre de la persona ingresada al final

struct Registro
{
    int nacumulada,nexamen,nfinal;
    string nombre;
};
int nmayor=0;
string nombremayor;

Registro registro;

void Datos()
{       cout<<"Ingrese su primer nombre: ";
        cin>>registro.nombre;
    do
    {
        cout<<"Ingrese la nota acumulada: ";
        cin>>registro.nacumulada;
        _flushall();
        if (registro.nacumulada>40)
        cout<<"Ingrese una nota correcta entre 0 y 40"<<endl;

    }while (!((registro.nacumulada>=0) and (registro.nacumulada<=40)));

    do{
       cout<<"Ingrese la nota del examen: ";
       cin>>registro.nexamen;
       _flushall();
       if (registro.nexamen>60)
            cout<<"Ingrese una nota correcta entre 1 y 60"<<endl;

    } while (!((registro.nexamen>=1) and (registro.nexamen<=60)));

};

 int numfinal(int nacumulada,int nexamen)
{
   nacumulada = registro.nacumulada;
   nexamen = registro.nexamen;
   registro.nfinal = nexamen + nacumulada;
    return registro.nfinal;
}

char siono()
{
    char respuesta;

    do{
    cout<<"Desea Continuar el programa (S/N):  ";
    cin.get(respuesta);

} while ((respuesta!= 'S') and (respuesta != 'N'));

return respuesta;
}
void Presentacion()
{
    registro.nfinal = numfinal(registro.nacumulada,registro.nexamen);
    cout<<"Nota acumulada: "<<registro.nacumulada<<"\n";
    cout<<"Nota del examen: "<<registro.nexamen<<"\n";
    cout<<"Nota Final: "<<registro.nfinal<<"\n";
}

char respuestax;


int main()

{

do {
    cout<<"Bienvenido!"<<endl;
    Datos();
    Presentacion();
    respuestax = siono();
    _flushall();

   if (registro.nfinal>nmayor)
        {
        nmayor = registro.nfinal;
        nombremayor = registro.nombre;
        }
} while (respuestax !='N');

cout<<"Estudiante con la mayor nota de:   "<<nmayor<<"  es: "<<endl;
cout<<nombremayor;

}
