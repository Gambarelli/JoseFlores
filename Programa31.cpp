#include <iostream>

using namespace std;

/*Ingresar dos numeros usando un procedimiento, luego calcular la suma del numero mayor de ambos numeros
usando un procedimiento, presentar los datos.
*/

int numero1,numero2,suma,mayor,menor;

int menornumero(int numero1,int numero2)
{
    if (numero1<numero2)
        menor=numero1;
    else
        menor = numero2;

    return menor;
}

void ingresar(int &numero1,int &numero2)
{
    cout<<"Ingresar numero 1>";
    cin>>numero1;

    cout<<"Ingresar numero 2>";
    cin>>numero2;

}

void calcular(int numero1, int numero2,int &mayor,int &suma)
{
    suma=numero1+numero2;


    if (numero1>numero2)
        mayor = numero1;
    else
        mayor=numero2;



}


int main()
{numero1=0;
numero2=0;

    ingresar(numero1,numero2);
    calcular(numero1,numero2,mayor,suma);

    menor=menornumero(numero1,numero2);



    cout<<"Valor numero1 "<<numero1<<"\n";
    cout<<"Valor numero2 "<<numero2<<"\n";
    cout<<"Suma: "<<suma<<"\n";
    cout<<"Mayor: "<<mayor<<"\n";
    cout<<"Menor: "<<menor<<"\n";
}
