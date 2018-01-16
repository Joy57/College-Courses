
/*header for offense class
@Written by Joynal
*/
#ifndef OFFENSE_H
#define OFFENSE_H

#include <iostream>
#include <string>
#include "player.h"
using namespace std;

//offense class derived from base class player
class Offense :public Player {

private: 
	//keep track of num of yards offense player will make
	int yards;


public:
	//constructor
	Offense(string name);
	//setter method
	void setMinutesPlayed(int minutes);
	//setter method
	void setYards(int yards);
	//print stats of players
	void printStats() const;
};


#endif