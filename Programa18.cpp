#include <iostream>

using namespace std;
/* Ingresar la tabla de la multiplicacion a presentar, usar el ciclo for asi

    1 x 5=5
    2 x 5=10
    ....
*/

int main()
{
    int tabla,resp,i;

    cout<<"Tabla de multiplicar a presentar  :";
    cin>>tabla;

    for (i=1;i<=10;i++)
    {
        resp = i * tabla;
        cout<<i<<"x"<<tabla<<"="<<resp<<"\n";


    }

}
