#include <iostream>
#include <string>
#include "Menu.h"
#include "Partida.h"
#include "Enemy.h"
#include "Player.h"
using namespace std;


int main(int argc, char** argv) {
	
	Menu *menu = new Menu();
    
	Partida *partida = new Partida("Spiderman",20,1);
	
	Player *player = new Player();
	Enemy *enemy = new Enemy();
	
	
	do{
		
		menu->menu_principal();
		partida->info_partida();
		
		if (menu->getOpcion() == '1') {
		
			if(partida->getNivel()>5){
				partida->history();
				cout << "Juego completado. Comience una nueva partida!" << endl<< endl;
				system("pause");
			}
			else{
				if(partida->getNivel()==1){
	        		enemy = new Enemy("Sandman", 20, 15, 10);
	        		player = new Player("Spiderman", 20, 15, 10);
	        		partida->history();
					partida->combat(player, enemy); 
					
				}else if(partida->getNivel()==2){
					player = new Player("Spiderman", 30, 25, 20);
					enemy = new Enemy("Electro", 25, 20, 15);
					partida->history();
					partida->combat(player, enemy); 
					
				}else if(partida->getNivel()==3){
		        	enemy = new Enemy("Duende Verde", 27, 22, 17);
		        	player = new Player("Spiderman", 35, 30, 25);
		        	partida->history();
					partida->combat(player, enemy); 
					
				}else if(partida->getNivel()==4){
					partida->history();
					system("pause");
		        	partida->gana_partida();
		        	
				}else if(partida->getNivel()==5){
		        	enemy = new Enemy("Dr Octopus", 100, 30, 20);
		        	player = new Player("Spiderman", 100, 35, 27);
		        	partida->history();
					partida->combat(player, enemy); 
				} 		
			}
	
	    } else if (menu->getOpcion() == '2') {
	        partida->nueva_partida();
	        partida->history();
	        player = new Player("Spiderman", 20, 15, 10);
	        enemy = new Enemy("Sandman", 20, 15, 10); 
	        partida->combat(player, enemy); 
			  
	    }else if (menu->getOpcion() == '3') {      
	        menu->tutorial();
	        
	    }else if (menu->getOpcion() == '4') {
	        cout << endl << "Saliendo del juego..." << endl;
	        return 0;
	    } else {
	        cout << endl << "Opcion invalida" << endl;	        
	    } 
	    
	}while(menu->getOpcion()!='4');
	
}