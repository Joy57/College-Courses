/*
 * This is the header file for the player class for CSC 4111 Lab 1 Task 2
 * You are not allowed to change this file. 
 * 10 points will be subtracted if this file is modified.
 *
 * @Author C. Dorman
 */

// Question 3 - What do the #ifndef, #define and #endif preprocessor commands do in this file? 

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Player:public defense {
	int tackles;

	defense(string name);
	setMinutesPlayed(int minutes);
	setTackles(int tackles);
	printStats() const;
};

#endif