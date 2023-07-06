#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	public:
		Player(char*, int, int, int);
		Player();
		~Player();
		
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