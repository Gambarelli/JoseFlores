#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <time.h>


/*
Se tiene un arreglo de 4 líneas con 4 columnas, existen 4 minas puestas aleatoriamente.
Usted deberá de preguntar la línea y la columna donde aplicara una marca, si usted pisa una mina el programa le dirá, la misión será encontrar las 4 minas y así el programa termina.
El programa deberá de funcionar para dos jugadores 1 y 2, uno juega primero y se guarda los intentos que tubo para encontrar las minas y luego el segundo jugador y el que menos intentos tenga será el ganador.
Este programa vale por 2 tareas.
La segunda se borra una tarea que no hayan entregado o que no les haya funcionado.


*/
using namespace std;
int const linea=4;
int const columna=4;
int contador1;
int contador2;
int contadorM;

string tabla[4][4];
int minas[4][4];

void relleno(string tabla[][4])
{
    for(int l=0;l<linea;l++)
    {
        for(int c=0;c<columna;c++)
        {
            tabla[l][c]=" X ";
        }

    }

}

void tablero(string tabla[][4],int jugador)
{
  cout<<"Encuentre la mina! jugador #"<<jugador<<endl<<endl;

    cout<<"     0  "<<"  1  "<<"  2  "<<"  3  "<<endl<<endl;
    cout<<" 0  "<<tabla[0][0]<<"  "<<tabla[0][1]<<"  "<<tabla[0][2]<<"  "<<tabla[0][3]<<endl;
    cout<<" 1  "<<tabla[1][0]<<"  "<<tabla[1][1]<<"  "<<tabla[1][2]<<"  "<<tabla[1][3]<<endl;
    cout<<" 2  "<<tabla[2][0]<<"  "<<tabla[2][1]<<"  "<<tabla[2][2]<<"  "<<tabla[2][3]<<endl;
    cout<<" 3  "<<tabla[3][0]<<"  "<<tabla[3][1]<<"  "<<tabla[3][2]<<"  "<<tabla[3][3]<<endl;

}



void aleatorio(int minas[][4])
{
  int conminas=0;

  for(int l=0;l<linea;l++)
  {
      for(int c=0;c<columna;c++)
      {

          minas[l][c]=rand()%2;
          if (minas[l][c]==1)
            {conminas++;}
          if (conminas==4)
                break;

      }
      if (conminas==4)
          break;
  }

}

void jugador(int jugador)
{
    int l,c;
   do{

    do{
    cout<<"Escoga la linea que desea probar: "<<endl;
    cin>>l;
    }while ((l<0) or (l>3));

    do{
    cout<<"Escoga la columna que desea probar: "<<endl;
    cin>>c;
    }while((c<0) or (c>3));

   }while ((tabla[l][c]==" M ") and (tabla[l][c]==" 0 "));

    if(tabla[l][c]!=" M ")
    {
       if(minas[l][c]==1)
       {
         cout<<"Ha encontontrado una mina!"<<endl;
         system("PAUSE");
         tabla[l][c]=" M ";
            if(jugador==1)
            {
             contador1++;
             contadorM++;
            }
            else
            {
            contador2++;
            contadorM++;
            }
       }
       else
       { tabla[l][c]=" 0 ";
           if(jugador==1)
            {
             contador1++;
            }
            else
            {
            contador2++;
            }

       }
    }
}

void juego()
{
  do{
    jugador(1);
    system("cls");
    tablero(tabla,1);
  }while(contadorM<4);
  contadorM=0;
  aleatorio(minas);
  relleno(tabla);
  system("cls");
  tablero(tabla,2);

  do{
    jugador(2);
    system("cls");
    tablero(tabla,2);
  }while(contadorM<4);
}
void quiengana()
{ cout<<"Turnos del jugador#1: "<<contador1<<endl;
  cout<<"Turnos del jugador#2: "<<contador2<<endl;
  cout<<endl;

    if(contador1>contador2)
        cout<<"Jugador #1 ha ganado!"<<endl;
    else
        cout<<"Jugador #2 ha ganado!"<<endl;
}
int main()
{
    srand(time(0));
   relleno(tabla);
   tablero(tabla,1);
   aleatorio(minas);
   juego();
   quiengana();
}


