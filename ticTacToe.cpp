#include <ticTacToe.h>


TicTacToe::TicTacToe()
{
    tableroGato.push_back(8);
    tableroGato.push_back(3);
    tableroGato.push_back(4);
    tableroGato.push_back(1);
    tableroGato.push_back(5);
    tableroGato.push_back(9);
    tableroGato.push_back(6);
    tableroGato.push_back(7);
    tableroGato.push_back(2);

    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
}


void TicTacToe::verTablero()
{
    unsigned int i = 0;

    for(i=0;i<tableroGato.size();i++)
    {
        cout<<this->tableroGato[i]<<" ";
    }
}

void TicTacToe::resetearDatos()
{
    unsigned int i = 0;

    for(i=0;p1.size() != 0;i++)
    {
        p1.pop_back();
    }

    for(i=0;p2.size() != 0;i++)
    {
        p2.pop_back();
    }

    for(i=0;tableroGato.size() != 0;i++)
    {
        tableroGato.pop_back();
    }

    for(i=0;graficoTablero.size() != 0;i++)
    {
        graficoTablero.pop_back();
    }

    tableroGato.push_back(8);
    tableroGato.push_back(3);
    tableroGato.push_back(4);
    tableroGato.push_back(1);
    tableroGato.push_back(5);
    tableroGato.push_back(9);
    tableroGato.push_back(6);
    tableroGato.push_back(7);
    tableroGato.push_back(2);

    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);
    graficoTablero.push_back(32);

    this->actualizarDatos();
}


void TicTacToe::imprimirTablero()
{

    cout<<endl;
    cout<<endl;
    cout<<"                   -------------------------------- "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |    "<<graficoTablero[0]<<"     |    "<<graficoTablero[1]<<"     |    "<<graficoTablero[2]<<"     |"<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                   -------------------------------- "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |    "<<graficoTablero[3]<<"     |    "<<graficoTablero[4]<<"     |    "<<graficoTablero[5]<<"     |"<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                   -------------------------------- "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |    "<<graficoTablero[6]<<"     |    "<<graficoTablero[7]<<"     |    "<<graficoTablero[8]<<"     |"<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                  |          |          |          | "<<endl;
    cout<<"                   -------------------------------- "<<endl;
    cout<<endl;
    cout<<endl;
}

int TicTacToe::comprobarDisponibilidad(int numero)
{
    unsigned int i = 0;
    int aux = 0;
    int size = tableroGato.size()-1;

    for(i=0;i<tableroGato.size();i++)
    {
        if(numero == tableroGato[i])
           {
             aux = tableroGato[i];
             tableroGato[i] = tableroGato[size];
             tableroGato[size] = aux;
             tableroGato.pop_back();
             return 1;
           }

    }

    return 0;


}

void TicTacToe::actualizarDatos()
{
     unsigned int i = 0;

     for(i=0;i<p1.size();i++)
     {
         graficoTablero[p1[i]-1] = 'X';
     }

     for(i=0;i<p2.size();i++)
     {
         graficoTablero[p2[i]-1] = 'O';
     }

     this->imprimirTablero();
}

int TicTacToe::comprobarGanaP1()
{
    unsigned int i = 0;
    unsigned int j = 1;
    unsigned int k = 2;
    int salir = 0;
    int suma = 0;
    int ganador = 0;

    while(salir == 0)
    {
        if(p1.size() == 3 && suma == 0)
           {
               suma = p1[i]+p1[j]+p1[k];

               if(suma == 15)
               {
                   ganador = 1;
                   salir = 1;
               }
            }

        else if(p1.size()>3)
        {
            while (k<p1.size())
            {


                while (k<p1.size())
                {


                    while (k<p1.size())
                    {
                       suma = p1[i]+p1[j]+p1[k];
                       if(suma == 15)
                       {
                           salir = 1;
                           ganador = 1;
                       }

                       else k++;

                       if(salir  == 1)
                           break;

                    }



                    if(salir == 1)
                        break;

                    j = j+1;
                    k = j+1;


                }

                if(salir == 1)
                    break;

                i = i+1;
                j = i+1;
                k = j+1;
            }

            salir = 1;


        }


        else
        {
            ganador = 0;
            salir = 1;
        }

    }

    return ganador;

}

int TicTacToe::comprobarGanaP2()
{
    unsigned int i = 0;
    unsigned int j = 1;
    unsigned int k = 2;
    int salir = 0;
    int suma = 0;
    int ganador = 0;

    while(salir == 0)
    {
        if(p2.size() == 3 && suma == 0)
           {
               suma = p2[i]+p2[j]+p2[k];

               if(suma == 15)
               {
                   ganador = 1;
                   salir = 1;
               }
            }

        else if(p2.size()>3)
        {
            while (k<p2.size())
            {


                while (k<p2.size())
                {


                    while (k<p2.size())
                    {
                       suma = p2[i]+p2[j]+p2[k];
                       if(suma == 15)
                       {
                           salir = 1;
                           ganador = 1;
                       }

                       else k++;

                       if(salir  == 1)
                           break;

                    }



                    if(salir == 1)
                        break;

                    j = j+1;
                    k = j+1;


                }

                if(salir == 1)
                    break;

                i = i+1;
                j = i+1;
                k = j+1;
            }

            salir = 1;
        }


        else
        {
            ganador = 0;
            salir = 1;
        }

    }

    return ganador;

}

void TicTacToe::insertarNumeroMagicoP1(int numero)
{
    if(numero == 1)
        p1.push_back(8);

    if(numero == 2)
        p1.push_back(3);

    if(numero == 3)
        p1.push_back(4);

    if(numero == 4)
        p1.push_back(1);

    if(numero == 5)
        p1.push_back(5);

    if(numero == 6)
        p1.push_back(9);

    if(numero == 7)
        p1.push_back(6);

    if(numero == 8)
        p1.push_back(7);

    if(numero == 9)
        p1.push_back(2);
}

void TicTacToe::insertarNumeroMagicoP2(int numero)
{
    if(numero == 1)
        p2.push_back(8);

    if(numero == 2)
        p2.push_back(3);

    if(numero == 3)
        p2.push_back(4);

    if(numero == 4)
        p2.push_back(1);

    if(numero == 5)
        p2.push_back(5);

    if(numero == 6)
        p2.push_back(9);

    if(numero == 7)
        p2.push_back(6);

    if(numero == 8)
        p2.push_back(7);

    if(numero == 9)
        p2.push_back(2);
}

void TicTacToe::humanoVsHumano()
{
   int numero = 0;
   char tryAgain;
   int correcto = 0;
   int turnos = 0;
   int ganaP1 = 0;
   int ganaP2 = 0;
   int quienEmpieza = 0;

   this->resetearDatos();

   while(quienEmpieza == 0)
   {
       cout<<endl;
       cout<<"1 para comenzar con X"<<endl;
       cout<<"2 para comenzar con O"<<endl;
       cout<<"Ingresa quien comenzara la partida: ";
       cin>>quienEmpieza;

       if(quienEmpieza == 1)
           break;

       if(quienEmpieza == 2)
           break;

       cout<<"Opcion incorrecta"<<endl;
       quienEmpieza = 0;
   }

       while( turnos < 9)
       {
          if(ganaP2 == 1)
              break;

          if(ganaP1 == 1)
              break;

          else  if(turnos < 9)
          {
              while(correcto == 0)
              {
                  cout<<endl;
                  cout<<"P1 Ingrese valor de 1-9 para colocarlo en el tablero: ";
                  cin>>numero;

                  if(numero>=1 && numero<=9)
                  {

                      correcto = this->comprobarDisponibilidad(numero);
                      if(correcto == 1)
                         {
                           this->insertarNumeroMagicoP1(numero);

                           if(quienEmpieza == 1)
                           {
                               graficoTablero[numero-1] = 'X';
                           }

                           else
                               graficoTablero[numero-1] = 'O';

                           this->imprimirTablero();
                           turnos = turnos+1;
                           correcto = 0;
                           ganaP1 = comprobarGanaP1();
                           break;

                          }

                      else
                      {
                          cout<<"Error la casilla esta ocupada"<<endl;
                          cout<<endl;
                      }
                  }

                  else
                      cout<<"Error numero fuera de rango"<<endl;
              }

              if(ganaP1 == 1)
                  break;

              if(ganaP2 == 2)
                  break;

          }

         if(ganaP1 == 1)
             break;

         if(ganaP2 == 1)
              break;

         else if(turnos < 9)
         {
             while(correcto == 0)
             {

                 cout<<endl;
                 cout<<"P2 Ingrese valor de 1-9 para colocarlo en el tablero: ";
                 cin>>numero;

                 if(numero>=1 && numero<=9)
                 {

                     correcto = this->comprobarDisponibilidad(numero);
                     if(correcto == 1)
                        {
                          this->insertarNumeroMagicoP2(numero);

                          if(quienEmpieza == 1)
                              graficoTablero[numero-1] = 'O';

                          else
                              graficoTablero[numero-1] = 'X';



                          this->imprimirTablero();
                          turnos = turnos+1;
                          correcto = 0;
                          ganaP2 = comprobarGanaP2();
                          break;

                         }

                     else
                     {
                         cout<<"Error la casilla esta ocupada"<<endl;
                         cout<<endl;
                     }
                 }

                 else
                     cout<<"Error numero fuera de rango"<<endl;
             }
         }

         if(ganaP2 == 1)
             break;

         if(ganaP1 == 1)
             break;

       }


   if(ganaP1 == 1)
   cout<<"El Ganador es P1 Fin de la partida"<<endl;

   else if(ganaP2 == 1)
       cout<<"El Ganador es P2 Fin de la partida"<<endl;

   else
       cout<<"Se termino la partida es un empate"<<endl;

   cout<<"Desea volver a jugar?     (Y/N) : ";
   cin>>tryAgain;

   if(tryAgain == 'Y' || tryAgain == 'y')
   this->humanoVsHumano();

}
