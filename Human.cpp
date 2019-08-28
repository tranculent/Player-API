
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h> 
#include <time.h>
#include "Player.h"

class Human : public Player {
private:
	std::string specialPower;
	std::string ability;

public:
	Human(std::string name, int health, int level) : Player(name, health, level) {}

	void setspecialpower(std::string sp) {
		specialPower = sp;
	}

	void setability(std::string a) {
		ability = a;
	}
};