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
void resetearDatos();
void humanoVsHumano(int quienEmpieza);
void humanovsMaquina();
int comprobarDisponibilidad(int numero);
int comprobarDisponibilidadMaquina(int numero);
void actualizarDatos();
int comprobarGanaP1();
int comprobarGanaP2();
int evaluacionMaquina(int turnoMaquina);
void insertarNumeroMagicoP1(int numero);
void insertarNumeroMagicoP2(int numero);
int jugador1();
int jugador2();
int turnos;
int dato;
int quienEmpieza;
int insertar;
int turnodelJugador;
int ganador;
};


#endif // TICTACTOE_H
