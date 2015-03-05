#ifndef TICTACTOE_H
#define TICTACTOE_H

using namespace std;

#include <vector>
#include <iostream>
#include <fstream>

class TicTacToe
{
private:

vector <int> tableroGato;
vector <char> controlTablero1;
vector <char> controlTablero2;
vector <int> p1;
vector <int> p2;

public:

TicTacToe();
void verTablero();
void resetearDatos();
void humanoVsHumano();
void imprimirTablero();
int comprobarDisponibilidad(int numero);
void actualizarDatos();
int comprobarGanaP1();
int comprobarGanaP2();
void insertarNumeroMagicoP1(int numero);
void insertarNumeroMagicoP2(int numero);

};


#endif // TICTACTOE_H
