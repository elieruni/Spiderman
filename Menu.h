#ifndef MENU_H
#define MENU_H

class Menu
{
	public:
	    Menu();
		~Menu();
		
		void menu_principal();
		void tutorial();
		
		char getOpcion();
		void setOpcion(char);
		
			
	private:
		char opcion;
};

#endif