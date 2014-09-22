#include <iostream>

using namespace std;

/*Ingresar 5 numeros a un arreglo y calcular el factorial de cada uno de los numeros y copiarlo
a otro arreglo.
usar una funcion para generar el factorial del numero.
usar un procedimiento para ingresar, otro para calcular y para
presentar*/

int const n=5;
int num[n];
long facto[n];
int i;

void Ingreso(int num[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        cout<<"Ingresar Arreglo["<<i<<"]:  ";
        cin>>num[i];
    }
}

long factorial(int numero)
{
    int i,fact;
    fact=1;
    for (i=1;i<=numero;i++)
    {
        fact=fact * i;
    }

    return fact;
}


void calcular(int num[],long fact[],int n)
{   int i;
    for (i=0;i<n;i++)
    {
        facto[i]=factorial(num[i]);
    }
}

void presentar(int num[],long fact[],int n)
{   int i;
    for (i=0;i<n;i++)
    {
        cout<<"Factorial de "<<num[i]<<" es "<<facto[i]<<endl;
    }
}


int main()
{
    Ingreso(num,n);
    calcular(num,facto,n);
    presentar(num,facto,n);

}
