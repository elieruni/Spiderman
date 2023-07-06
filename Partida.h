#ifndef PARTIDA_H
#define PARTIDA_H
#include <string.h>
#include "Player.h"
#include "Enemy.h"

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


class Partida
{
	public:
		Partida(char*, int, int);
		Partida();
		~Partida();
		
		char* getNombre();
		int getVida();
		int getNivel();
		
		void setNombre(char*);
		void setVida(int);
		void setNivel(int);
		void cargarNivel();
		void history();
		void info_partida();
		void nueva_partida();
		void combat(Player*, Enemy*);
		void gana_partida();
		void pierde_partida();
		
		
		
	private:
		char* nombre; 
	    int vida;
	    int nivel;
		
};

#endif