#include <iostream>

using namespace std;

/*Elaborar un programa donde ingresemos datos en un arreglo bidimensional,
de 4 lineas y 5 columnas y dejemos la ultima linea reservada para sumar los numeros pares.
si no hay pares debera aparecer 0*/

int const linea=4;
int const columna=5;

int bidi[linea][columna];

void ingresar(int bidi[][columna],int linea,int columna)
{
        for(int l=0;l<linea-1;l++)
         {
            for(int c=0;c<columna;c++)
            {
                cout<<"Ingresar el numero: ("<<l<<","<<c<<"): ";
                cin>>bidi[l][c];
            }
         }
}

void sPares(int bidi[][columna],int linea,int columna)
{   int sumapar;
    for(int c=0;c<columna;c++)
    {
        sumapar=0;

        for(int l=0;l<linea-1;l++)
        {
            if (bidi[l][c]%2==0)
            {
                sumapar+=bidi[l][c];
            }

        }
        bidi[3][c]=sumapar;
    }


}

void presentar(int [][columna])
{
    int l,c;
    for(l=0;l<linea;l++)
    {
        for(c=0;c<columna;c++)
        {
            cout<<bidi[l][c]<<" ";
        }
        cout<<endl;
    }

}

int main()
{

ingresar(bidi,linea,columna);
sPares(bidi,linea,columna);
presentar(bidi);

}
