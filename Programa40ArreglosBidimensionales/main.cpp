#include <iostream>


using namespace std;
int const lin=4;
int const col=4;
int bidi[lin][col];
int linsuma,sumal;

void ingreso(int bidi[][col],int lin,int col)
{
    int l,c;
    for(l=0;l<lin;l++)
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

int sumarfila(int bidi[][col],int lin,int col,int linsuma)
{
    int c;
   for(c=0;c<col;c++)
   {
       sumal+=bidi[linsuma][c];
   }
    return sumal;
}

int main()
{
   ingreso(bidi,lin,col);
   presentar(bidi,lin,col);
   cout<<"Ingresar la linea a sumar: ";
   cin>>linsuma;
   sumal=sumarfila(bidi,lin,col,linsuma);
   cout<<"Suma es...:"<<sumal<<endl;



}
