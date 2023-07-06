#include "Enemy.h"
#include <cstring>

Enemy::Enemy(char* nombre, int health, int attackPower, int defense){
	this->name = new char[strlen(nombre)+1];
	strcpy(this->name, nombre);
	this->health = health;
	this->attackPower = attackPower;
	this->defense = defense;
}

Enemy::Enemy(){

}

Enemy::~Enemy(){
	delete[] this->name;
}
	    
char* Enemy::getName()const{
	return this->name;
}

int Enemy::getHealth()const{
	return this->health;
}

int Enemy::getAttackPower()const{
	return this->attackPower;
}

int Enemy::getDefense()const{
	return this->defense;
}

void Enemy::setName(char* name){
	this->name = new char[strlen(name)+1];
	strcpy(this->name, name);
}

void Enemy::setHealth(int health){
	this->health = health;
}

void Enemy::setPowerAttack(int attackPower){
	this->attackPower = attackPower;
}

void Enemy::setDefense(int defense){
	this->defense = defense;
}