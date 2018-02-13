#pragma once

#include "offense.h"
#include <iostream>
#include <string>

using namespace std;

class Joynal : public Offense {
	
private:
	int touchDowns;

public:
	Joynal(string);
	virtual void setMinutesPlayed(int minutes);
	void setTouchdowns(int touchDowns );
	virtual void printStats() const;
};