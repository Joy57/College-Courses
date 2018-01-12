#include <iostream>
#include <string>
#include "defense.h"

using namespace std;

	Defense::Defense(string name):Player(name){
		defensePlayerName = name;
	}

	void Defense::setMinutesPlayed(int minutes) {
		this->minutes = minutes;
	}
	void Defense::setTackles(int tackles) {
		this->tackles = tackles;
	}
	void Defense::printStats() const { 
		cout << "Name: " << defensePlayerName <<
			"\tNumber: " << number <<"\t minutes: "<<minutes
			<<"\t tackles: "<<tackles;
	}
