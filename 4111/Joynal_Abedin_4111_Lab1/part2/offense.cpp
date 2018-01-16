/*Implemention for offense class
@Written by Joynal
*/

#include <iostream>
#include <string>
#include "offense.h"

//constructor for offense class 
//@parameter player's name
//name is being inherited from base class Player; call to base class constructors

Offense::Offense(string name): Player(name) {
}
//Setter method, sets the amount of time a player played in a game
//@parameter player's minutes
//minutes is being inherited from base class player
void Offense::setMinutesPlayed(int minutes) {
	this->minutes = minutes;
}

//Setter method, sets the yards
//@parameter player's yard
void Offense::setYards(int yards) {
	this->yards = yards;
}
//prints out offensive player's stats and overrides the base class function 

void Offense::printStats() const {
	Player::printStats();
	cout << "\tMinutes: " << minutes << "\tYards: " << yards;
	cout << endl;
}