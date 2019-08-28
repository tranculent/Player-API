#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h> 
#include <time.h>
#include "Player.h"
#include "Human.h"
#include "Orc.h"

using namespace std;

int main() {
	srand(time(NULL));
	
	Orc Jordan = Orc("Jordan", 100);
	Jordan.getplayerinfo();
	Jordan.setspecialpower("Enrage");
	Jordan.getisdead();

	Human Mike = Human("Mike", 100, 5);
	Mike.getplayerinfo();
	Mike.setspecialpower("Wisdom");
	cout << Mike.gethealth() << endl;
}