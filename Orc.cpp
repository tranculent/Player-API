#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h> 
#include <time.h>
#include "Player.h"
#include "Orc.h"

Orc::Orc(std::string name, int health) : Player(name, health) {}

void Orc::setspecialpower(std::string sp) {
	specialPower = sp;
}
