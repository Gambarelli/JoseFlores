#include <iostream>

using namespace std;
/* Ingresar nota acumulada y examen del alumno, calcular la nota final,
luego presentar si esta aprobado o reprobado, luego de finalizar el ciclo presentar
cuantos aprobados y reprobados hay.
Hacerlo para 5 alumnos.
*/
int main()
{
    int na,ex,nf,ap,rp,contador;
    contador=0;
    ap=0;
    rp=0;

    while (contador<5)
    {
    contador++;
    cout<<"Ingrese la Nota Acumulada:  ";
    cin>>na;
    cout<<"Ingrese la Nota del examen:  ";
    cin>>ex;

    nf = na + ex;

    cout<<"Nota final es:  "<<nf<<endl;

    if (nf>=60)
       {

        cout<<"Aprobado"<<endl;
        ap++;
       }
        else
{

        cout<<"Reprobado"<<endl;
        rp++;
}
    }

    cout<<"Aprobados:  "<<ap<<endl;
    cout<<"Reprobados:  "<<rp<<endl;




}
