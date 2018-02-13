#include "Amran.h"

Amran::Amran(string name) : Defense(name)
{
	interception = 0;
}

void Amran::setInterception(int interception)
{
	this->interception = interception;
}

void Amran::setMinutesPlayed(int minutes)
{
	this->minutes = minutes;
}

void Amran::printStats() const
{
	cout << "Interception(s): " << interception << endl;
}