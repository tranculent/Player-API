
#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <stdio.h> 
#include <time.h>

Player::Player(std::string name, int health, int level) :
	name(name), health(health), level(level), isdead(false), damage(level* (rand() % 5 + 1))
{};

void Player::getplayerinfo() {
	std::cout << "Name: " << this->getName() << "\nRace: " << "\nHealth: " << this->gethealth() << "\nLevel: "
		<< this->getlevel() << "\nDamage: " << this->getdamage() << "\n" << std::endl;
}

int Player::getlevel() {
	return this->level;
}

void Player::setlevel(int level) {
	this->level = level;
}

bool Player::getisdead() {
	return this->isdead;
}

void Player::setisdead(bool dead) {
	this->isdead = dead;
}

int Player::gethealth() {
	return this->health;
}

void Player::sethealth(int health) {
	this->health = health;
}

int Player::getdamage() {
	return this->damage;
}

void Player::setdamage(int damage) {
	this->damage = damage;
}

inline void Player::killPlayer() {
	std::cout << "ohh noo, " << this->getName() << " has been killed." << std::endl;
	this->~Player();
}

// player 1 attacks player 2

void Player::attack(Player& player1, Player& player2) {
	// base case that checks .... if player1 is dead, return;
	// the orc attacked player1
	int tempHealthForPlayer1 = player1.gethealth() - this->getdamage();
	player1.sethealth(tempHealthForPlayer1);

	// the orc attacked player2
	int tempHealthForPlayer2 = player2.gethealth() - this->getdamage();
	player2.sethealth(tempHealthForPlayer2);

	std::cout << "Ouch!! " << player2.getName() << " has just been attacked by " << this->getName() << " and did " << this->getdamage()
		<< " damage!" << "\nThe remaining health of " << player2.getName() << " is " << player2.gethealth() << ".\n" << std::endl;

	if (player2.gethealth() < 1) {
		player2.setisdead(true);
		player2.killPlayer();
	}
	if (player1.gethealth() < 1) {
		player1.setisdead(true);
		player1.killPlayer();
	}
}

void Player::setName(std::string name) {
	this->name = name;
}

std::string Player::getName() {
	return this->name;
}

Player:: ~Player() {
	std::cout << "Destroyed player." << std::endl;
}