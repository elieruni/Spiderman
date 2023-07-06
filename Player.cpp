#include "Player.h"
#include <cstring>

Player::Player(char* nombre, int health, int attackPower, int defense){
	this->name = new char[strlen(nombre)+1];
	strcpy(this->name, nombre);
	this->health = health;
	this->attackPower = attackPower;
	this->defense = defense;
}

Player::Player(){
	
}

Player::~Player(){
	delete[] this->name;
}

	    
char* Player::getName()const{
	return this->name;
}
int Player::getHealth()const{
	return this->health;
}
int Player::getAttackPower()const{
	return this->attackPower;
}
int Player::getDefense()const{
	return this->defense;
}

void Player::setName(char* name){
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
}

void Player::setHealth(int health){
	this->health = health;
}
void Player::setPowerAttack(int attackPower){
	this->attackPower = attackPower;
}
void Player::setDefense(int defense){
	this->defense = defense;
}