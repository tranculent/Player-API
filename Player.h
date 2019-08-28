#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h> 
#include <time.h>

class Player {
private:
	std::string name;
	int health;
	int level;
	bool isdead;
	int damage;

public:
	Player(std::string name, int health, int level = 1);
	~Player();
	void getplayerinfo();
	int getlevel();
	void setlevel(int);
	bool getisdead();
	void setisdead(bool);
	int gethealth();
	void sethealth(int);
	int getdamage();
	void setdamage(int);
	std::string getName();
	void setName(std::string);
	void attack(Player&, Player&);
	void killPlayer();
};