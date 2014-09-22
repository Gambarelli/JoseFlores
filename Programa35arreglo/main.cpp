#include <iostream>

using namespace std;

const int n=4;
int num[n];


void ingreso(int num[], int n)
{
    int i;
    for (i=0; i<=n;i++)
    {
        cout<<"Ingresar Num["<<i<<"]: ";
        cin>>num[i];
    }
}

void presentar(int num[], int n)
{
    int i;
    for (i=0; i<=n;i++)
    {
        cout<<"Num["<<i<<"]: "<<num[i]<<endl;
    }


}

int pares(int num[],int n)
{
    int i;
    int sumap=0;
    for (i=0;i<=n;i++)
    {

        if (num[i]%2==0)
        {
          sumap+=num[i];
        }
    }
    return sumap;

}

int suma(int num[],int n)
{
    int i;
    int xsuma=0;
    for (i=0; i<=n;i++)
    {
      xsuma = xsuma + num[i];
    }

    return xsuma;

}

int maximo(int num[], int n)
{
    int i;
    int xmax=0;
    for (i=0;i<=n;i++)
    {
        if (xmax<num[i])
        {
            xmax=num[i];
        }


    }

    return xmax;

}


int main()
{

    ingreso(num,n);
    presentar(num,n);
    cout<<"Maximo: "<<maximo(num,n)<<endl;
    cout<<"Suma: "<<suma(num,n)<<endl;
    cout<<"Suma de pares: "<<pares(num,n)<<endl;
}
