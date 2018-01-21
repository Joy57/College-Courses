#include "joynal.h"

Joynal::Joynal(string name) :Offense(name) {

}
void Joynal::setMinutesPlayed(int minutes) {
	this->minutes = minutes;
}
void Joynal::setTouchdowns(int touchDowns) {
	this->touchDowns = touchDowns;
}
void Joynal::printStats() const{
	Offense::printStats();
	cout << "\t\t\t\t\t\tTouchdowns: " << touchDowns << endl;
}