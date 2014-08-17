#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


using namespace std;
/*Presentar 10 numeros usando el ciclo for */

int main()

{   system("color 02");
    srand(time(0));
    int numero,i;

    for ( i = 10;i>0;i--)
    {
        numero = 1 + rand()%(101-1);

        cout<<i<<"...>"<<numero<<"\n";


    }


}
