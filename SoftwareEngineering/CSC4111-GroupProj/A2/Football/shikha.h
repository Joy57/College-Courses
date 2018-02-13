// Header File
// Created By: Shikha Sikligar

#include "player.h"
#include "defense.h"
#include <iostream>
using namespace std;

class Shikha : public Defense
{
private:
	int tackles;
public:
	Shikha(string name);
	void setTackles(int tackles);
	virtual void printStats() const;
};
