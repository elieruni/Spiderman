#include "Menu.h"
#include <iostream>
using namespace std;

Menu::Menu(){
	this->opcion = 0;
}

void Menu::menu_principal() {
	system("cls");
    cout <<endl <<"Bienvenido al Universo Spiderman" << endl << endl;
    cout << "1. Continuar partida" << endl;
    cout << "2. Crear nueva partida" << endl;
    cout << "3. Tutorial" << endl;
    cout << "4. Salir del juego" << endl << endl;
    cout << "Seleccione una opcion: ";
    cin >> this->opcion;
}

void Menu::setOpcion(char opcion){
	this->opcion = opcion;
}

char Menu::getOpcion(){
	return this->opcion;
}


void Menu::tutorial(){
	system("cls");
	cout << endl <<
"1. Al iniciar el juego, te encontraras con un menu principal que te dara varias opciones para elegir. Puedes seleccionar 'Continuar partida' si deseas retomar desde donde dejaste la ultima vez. Si prefieres comenzar una nueva partida, elige 'Crear partida nueva'. Si necesitas ayuda para entender las reglas y mecanicas del juego, selecciona 'Tutorial'. Y si en cualquier momento deseas salir del juego, elige la opcion 'Salir'." << endl << endl <<

"2. Una vez que hayas seleccionado 'Crear partida nueva', el juego te llevara al primer nivel. En cada nivel, te enfrentaras a enemigos cada vez mas dificiles. Tu objetivo sera derrotar a todos los enemigos y avanzar al siguiente nivel." << endl << endl <<

"3. Durante el combate, tendras la opcion de elegir con que arma atacar. El juego ofrece varias opciones de armas para elegir. Sin embargo, es importante tener en cuenta que las armas mas poderosas tienen una probabilidad del 50% de golpear a tu enemigo. Esto significa que hay un riesgo de que el ataque falle y no cause dano."<< endl << endl <<

"4. A medida que avances en los niveles, encontraras enemigos mas desafiantes y tendras que tomar decisiones estrategicas sobre que arma utilizar en cada situacion. Puedes elegir usar armas mas fuertes y arriesgarte a que el ataque falle, o puedes optar por armas menos poderosas pero mas confiables en terminos de precision."<< endl << endl <<

"5. Tu objetivo principal en cada nivel es derrotar a todos los enemigos. Una vez que hayas eliminado a todos los enemigos, podras avanzar al siguiente nivel y enfrentar nuevos desafios."<< endl << endl <<

"Recuerda que la clave para tener exito en el juego es tomar decisiones estrategicas y adaptarte a medida que los enemigos se vuelven mas dificiles. Diviertete explorando los niveles y derrotando a tus oponentes."<< endl << endl;
	system("pause");
}	

