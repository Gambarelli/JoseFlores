#include <iostream>

using namespace std;

int const lin=5;
int const col=5;
int bidi[lin][col];
int linsuma,sumac=0;

void ingreso(int bidi[][col],int lin,int col)
{
    int l,c;
    for(l=0;l<lin-1;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<"Ingresar Punto Cartesiano["<<l<<","<<c<<"]: ";
            cin>>bidi[l][c];
        }
    }
}

void presentar(int bidi[][col],int lin,int col)
{
    int l,c;
    for(l=0;l<lin;l++)
    {
        for(c=0;c<col;c++)
        {
            cout<<bidi[l][c]<<" ";
        }
        cout<<endl;
    }
}

void promedio(int bidi[][col],int lin, int col)
{
   int l,c;
   for(c=0;c<col;c++)
   {
        sumac=0;

           for(l=0;l<lin-1;l++)
            {
                sumac+=bidi[l][c];
            }
        bidi[4][c]=sumac/(lin-1);
   }
}

int main()
{
    ingreso(bidi,lin,col);
    promedio(bidi,lin,col);
   presentar(bidi,lin,col);
}
