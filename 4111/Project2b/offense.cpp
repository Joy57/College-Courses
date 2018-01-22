#include <iostream>
#include <string>
#include "offense.h"
using namespace std;

Offense::Offense(string name): Player(name){
	offensePlayerName = name;

}
void Offense::setMinutesPlayed(int minutes) {
	this->minutes = minutes;
}
void Offense::setYards(int yards) {
	this->yards = yards;
}
void Offense::printStats() const {
	cout << "Name: " << offensePlayerName << "\tNumber: " << number
		<<"\tMinutes: "<<minutes<<"\yards: "<<yards;
}