// Implementation File
// Created By: Shikha Sikligar

#include "player.h"
#include "defense.h"
#include "Shikha.h"
#include <iostream>
#include <string>
using namespace std;

Shikha::Shikha(string name) :Defense(name)
{
}

void Shikha::setTackles(int tackles)
{
	this->tackles = tackles;
}

void Shikha::printStats() const
{
	Player::printStats();
	cout << "\tMinutes: " << minutes << "\tTackles: " << tackles << endl;
}