#include <iostream>
#include <ticTacToe.h>
#include <vector>


using namespace std;

int main()
{
    TicTacToe tablero;
    int opcion = 0;

    while(opcion != 27)
    {
        cout<<"1  --- Iniciar juego Humano vs Maquina"<<endl;
        cout<<"2  --- Iniciar juego Humano vs Humano"<<endl;
        cout<<"3  --- Iniciar juego Maquina vs Maquina"<<endl;
        cout<<"27 --- Salir de la aplicacion"<<endl;

        cout<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        if(opcion == 1)
            tablero.humanovsMaquina();

        if(opcion == 2)
            tablero.humanoVsHumano();


    }



    return 0;
}

