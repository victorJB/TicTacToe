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
vector <char> graficoTablero;
vector <int> p1;
vector <int> p1Verdadero;
vector <int> p2;
vector <int> p2Verdadero;

public:

TicTacToe();
void verTablero();
void resetearDatos();
void humanoVsHumano();
void humanovsMaquina();
void imprimirTablero();
int comprobarDisponibilidad(int numero);
int comprobarDisponibilidadMaquina(int numero);
void actualizarDatos();
int comprobarGanaP1();
int comprobarGanaP2();
int evaluacionMaquina(int turnoMaquina);
void insertarNumeroMagicoP1(int numero);
void insertarNumeroMagicoP2(int numero);

};


#endif // TICTACTOE_H
