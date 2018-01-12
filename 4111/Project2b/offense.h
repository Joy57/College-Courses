/*
 * This is the header file for the player class for CSC 4111 Lab 1 Task 2
 * You are not allowed to change this file. 
 * 10 points will be subtracted if this file is modified.
 *
 * @Author C. Dorman
 */

// Question 3 - What do the #ifndef, #define and #endif preprocessor commands do in this file? 
#ifndef Offense_H
#define Offense_H

#include <iostream>
#include <string>
#include "player.h"
using namespace std;

class Offense :public Player {

public:

	int yards;
	string offensePlayerName;

	Offense(string name);
	void setMinutesPlayed(int minutes);
	void setYards(int yards);
	void printStats() const;
};


#endif