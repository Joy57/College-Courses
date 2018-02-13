
/*header for defense class
@Written by Joynal
*/

#ifndef DEFENSE_H
#define DEFENSE_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

//class defense is being derived from base class player
class Defense : public Player {
private:
	//num of tackles for defense player
	int tackles;

public:
	
	//constructor for defense player. it takes player name as a parameter, inherited from base class player
	Defense(string name);
	//setter method, implemented in defense.cpp
	void setMinutesPlayed(int minutes);
	//setter method for tackles, implemented in defense.cpp
	void setTackles(int tackles);
	//prints out player's stats 
	//overrides printstats func in player class
	void printStats() const;

};

#endif