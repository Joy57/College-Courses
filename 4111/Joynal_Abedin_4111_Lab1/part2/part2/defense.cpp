/*Implemention for defense class
  @Written by Joynal
*/
#include <iostream>
#include <string>
#include "defense.h"

// constructor for defense class
//@parameter player's name
//name is being inherited from base class Player; call to base class constructors

Defense::Defense(string name) :Player(name) {	
}

//Setter method, sets the amount of time a player played in a game
//@parameter player's minutes
//minutes is being inherited from base class player
void Defense::setMinutesPlayed(int minutes) {
	this->minutes = minutes;
}
//Setter method, sets the tackles
//@parameter player's tackles
void Defense::setTackles(int tackles) {
	this->tackles = tackles;
}
//prints out defensive player's stats and overrides the base class function 
void Defense::printStats() const {
	Player::printStats();
	cout << "\t Minutes: " << minutes
		<< "\t Tackles: " << tackles;
	cout << endl;
}
