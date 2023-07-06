#include "Partida.h"
using namespace std;
#include <cstring>

Partida::Partida(char* nombre, int vida, int nivel){
	this->nombre = new char[strlen(nombre)+1];
	this->vida = vida;
	this->nivel = nivel;
	strcpy(this->nombre, nombre);
}

Partida::~Partida(){
	delete[] this->nombre;
	
}

char* Partida::getNombre() {
	return this->nombre;
}

int Partida::getVida(){
	return this->vida;
}

int Partida::getNivel(){
	return this->nivel;
}

void Partida::setNombre(char* nombre){
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
}

void Partida::setVida(int vida){
	this->vida = vida;
}

void Partida::setNivel(int nivel){
	this->nivel = nivel;
}

void Partida::nueva_partida() {
    ofstream archivo("partida_guardada.txt");
    
    cout << endl <<"Creando nueva partida..." << endl << endl;
    
    if (archivo.is_open()) {
        
        
        cout << "Nombre de la Partida: ";
        cin >> this->nombre;
        this->vida = 20;
        this->nivel = 1;
        
        // Escribir los datos de la partida en el archivo
        archivo << this->nombre << endl;
        archivo << this->vida << endl;;
        archivo << this->nivel << endl;
          
        // Cerrar el archivo
        archivo.close();
    }
}

void Partida::info_partida(){
		
		ifstream archivo("partida_guardada.txt");
    
    if (archivo.is_open()) {
               
        // Leer los datos del archivo y asignarlos a la estructura partida
        archivo >> this->nombre;
        archivo >> this->vida;
        archivo >> this->nivel;
        
        // Cerrar el archivo
        archivo.close();  
    } 
}

void Partida::history(){
	system("cls");
    
    if (this->nivel == 1) {
        cout << endl << "En este universo de Spiderman, el famoso superheroe neoyorquino se encuentra en una mision para detener al malvado Doctor Octopus, quien ha estado causando problemas y robando tecnologia peligrosa en toda la ciudad."  << endl << endl << "El juego comienza en el apartamento de Spiderman, donde recibe un mensaje urgente del alcalde de la ciudad. El jugador debe recoger su traje y dirigirse al ayuntamiento"  << endl << endl << "Mientras Spiderman se dirigia hacia el ayuntamiento se encontro con un inesperado obstaculo en su camino. El villano conocido como Sandman, un ser capaz de transformar su cuerpo en arena y controlarla a su voluntad, aparecio frente a Spiderman, desafiandolo a una epica batalla."  << endl;
        
    }else if (this->nivel == 2) {      
        cout << endl << "Tras la batalla, Spiderman se dirigio al ayuntamiento, donde el alcalde le informa que el Doctor Octopus ha robado una tecnologia importante de un laboratorio secreto y que Spiderman es su unica esperanza para recuperarla."  << endl << endl << "Mientras Spiderman sigue la pista del laboratorio secreto se encuentra cara a cara con el temible villano conocido como Electro. Con su mirada llena de malicia y poder, el villano desafia a nuestro heroe en un combate a muerte."  << endl;
            
    }else if (this->nivel == 3) {
        cout << endl << "Mientras Spiderman continua su busqueda del laboratorio secreto, se encuentra con el malvado Duende Verde, su archienemigo. Ambos se enfrentan en una feroz batalla, donde Spiderman despliega todas sus habilidades aracnidas para enfrentar al poderoso villano."  << endl << endl << "Finalmente, Spiderman logra ganar la ventaja en la batalla. Con su astucia y determinacion, consigue hacer ceder al Duende Verde y, en un momento de debilidad, le arranca la ubicacion exacta del laboratorio secreto."  << endl;
                   
    } else if (this->nivel == 4) {             
        cout << endl <<"Mientras Spiderman busca incansablemente el laboratorio secreto, se encuentra con Iron Man, quien le ayuda a mejorar su poder de ataque. Juntos, trabajan en una nueva armadura o dispositivo que permitira a Spiderman enfrentar los peligros que les esperan en el laboratorio secreto. Con su poder de ataque mejorado, Spiderman continua su busqueda, comprometido a proteger la ciudad y desmantelar cualquier amenaza que encuentren en su camino." << endl<< endl; 	
          
    }else if (this->nivel == 5) {
        cout << endl <<"Spiderman ha llegado al laboratorio secreto y se encuentra cara a cara con su enemigo mas dificil, el Doctor Octopus. Esta batalla promete ser epica y desafiante para Spiderman."<< endl << endl << "El Doctor Octopus es un villano formidable con brazos mecanicos que le otorgan una fuerza y habilidades superiores. Su objetivo es utilizar el laboratorio para llevar a cabo sus malvados planes y causar caos en la ciudad." << endl;
       
    }else {
    	cout << endl <<"Spiderman ha logrado vencer al Doctor Octopus en esta batalla epica. El villano es derrotado y capturado, y el laboratorio secreto queda asegurado. La ciudad esta a salvo una vez mas gracias a la valentia y determinacion de Spiderman." << endl <<endl ;
    }	
}	

void Partida::combat(Player* player, Enemy* enemy){

	// Muestra la informacion de la partida
	cout << endl << "Partida: " << this->nombre << endl;
	cout << "Vidas: " << this->vida << endl;
	cout << "Nivel: " << this->nivel << endl;
	
    // Inicializar la semilla para generar numeros aleatorios
    srand(time(0));
	
    // Mostrar informacion inicial
    cout << endl <<endl<< "Jugador: " << player->getName() << ", Salud: " << player->getHealth() << ", Poder de ataque: " << player->getAttackPower() << ", Defensa: " << player->getDefense() << endl;
    cout << "Enemigo: " << enemy->getName() << ", Salud: " << enemy->getHealth() << ", Poder de ataque: " << enemy->getAttackPower() <<  ", Defensa: " << enemy->getDefense() <<endl <<endl;

    while (player->getHealth() > 0 && enemy->getHealth() > 0 && this->vida > 0) {
        // Turno del jugador
        
        int playerAttack;
        char arma;
        
        do{
        cout << "Seleccione el arma: Punos(1) Patada(2) Telarana(3): " ;
        cin>>arma;
        
        if (arma=='1'){
        	playerAttack = player->getAttackPower() ;
        	
		}else if (arma == '2'){ 
			if ((rand() % 100)>50){
	        	playerAttack = player->getAttackPower() + rand() % 20;
			}else{
	        	 playerAttack = 0;}
			
		} else if (arma == '3'){ 
			if ((rand() % 100)>80){
	        	playerAttack = player->getAttackPower() + rand() % 50;
			}else{
	        	 playerAttack = 0;}
		}else{
				cout<<"Arma no disponible!" <<endl;}
			  
	    } while((arma!='1')&&(arma!='2')&&(arma!='3')); 
		  
	        int enemyDefense = enemy->getDefense() + rand() % 5;
	        int damageDealt = max (0, playerAttack - enemyDefense);
	        enemy->setHealth(enemy->getHealth()-damageDealt);
	        cout << endl << "Has atacado a " << enemy->getName() << " por " << damageDealt << " puntos de dano." << endl;

        // Verificar si el enemigo ha sido derrotado
	        if (enemy->getHealth() <= 0) {
	            cout << "Has derrotado a " << enemy->getName() << "." << endl<< endl;
	            gana_partida();
	            system("pause");
	            break;
	        }
	
	        // Turno del enemigo
	        int enemyAttack;
	        if ((rand() % 100)>40)
	        {
	        	enemyAttack = enemy->getAttackPower() + rand() % 30;
			}else{
	        	 enemyAttack = 0;
			}
	        int playerDefense = player->getDefense() + rand() % 5;
	        int damageTaken = max(0, enemyAttack - playerDefense);
	        player->setHealth(player->getHealth()-damageTaken);
	        cout << enemy->getName() << " te ha atacado por " << damageTaken << " puntos de dano." << endl;
	        
	        //Estado de los jugadores
	        cout << endl <<endl<< "Jugador: " << player->getName() << ", Salud: " << player->getHealth() << ", Poder de ataque: " << player->getAttackPower() << ", Defensa: " << player->getDefense() << endl;
	   		cout << "Enemigo: " << enemy->getName() << ", Salud: " << enemy->getHealth() << ", Poder de ataque: " << enemy->getAttackPower() <<  ", Defensa: " << enemy->getDefense() <<endl <<endl;
	
	        // Verificar si el jugador ha sido derrotado
	        if (player->getHealth() <= 0) {
	            cout << "Has sido derrotado por " << enemy->getName() << "." << endl<< endl;
	            pierde_partida();
	            system("pause");
	        }
    }
}

void Partida::gana_partida() {    
   
    ofstream archivo("partida_guardada.txt");
    
    if (archivo.is_open()) {
        
        
          this->nombre = nombre;
          this->vida = vida;
          this->nivel = nivel+1;
        
          archivo << this->nombre << endl;
          archivo << this->vida << endl;
          archivo << this->nivel  << endl;

        // Cerrar el archivo
        archivo.close();
    }
}

	//Funcion para restar 1 de vida

void Partida::pierde_partida() {    
   
    ofstream archivo("partida_guardada.txt");
    
    if (archivo.is_open()) {
      this->nombre = nombre;
      this->vida = vida-1;
      this->nivel = nivel;
    
      archivo << this->nombre << endl;
      archivo << this->vida << endl;
      archivo << this->nivel  << endl;

        // Cerrar el archivo
        archivo.close();
    }
}
