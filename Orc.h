#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h> 
#include <time.h>

#include "Player.h"

class Orc : public Player {
private:
	std::string specialPower;

public:
	Orc(std::string name, int health);

	void setspecialpower(std::string sp);
};