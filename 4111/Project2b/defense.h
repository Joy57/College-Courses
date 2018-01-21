/*
 * This is the header file for the player class for CSC 4111 Lab 1 Task 2
 * You are not allowed to change this file. 
 * 10 points will be subtracted if this file is modified.
 *
 * @Author C. Dorman
 */

// Question 3 - What do the #ifndef, #define and #endif preprocessor commands do in this file? 

#ifndef defense_H
#define defense_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Defense : public Player {

public:
	int tackles;
	string defensePlayerName;
	Defense(string name);
	void setMinutesPlayed(int minutes);
	void setTackles(int tackles);
	void printStats() const;

};

#endif