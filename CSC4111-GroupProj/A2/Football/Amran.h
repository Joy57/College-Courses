#include "defense.h"

class Amran : public Defense
{
public:
	Amran(string);
	void setInterception(int);
	virtual void setMinutesPlayed(int);
	virtual void printStats() const;

private:
	int interception;
};
