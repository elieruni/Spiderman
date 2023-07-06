#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
	public:
		Enemy(char*, int, int, int);
		Enemy();
		~Enemy();
	
		char* getName()const;
		int getHealth()const;
		int getAttackPower()const;
		int getDefense()const;
		
		void setName(char*);
		void setHealth(int);
		void setPowerAttack(int);
		void setDefense(int);
		
	private:
		const char* name;
	    int health;
	    int attackPower;
	    int defense;
};

#endif