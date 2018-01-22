/*
 * @Author C. Dorman
 */

#include <iostream>
#include <string>
#include "player.h"
#include "offense.h"            
#include "defense.h"
#include "joynal.h"
#include <windows.h>
using namespace std;

int main(){

	// Create the players for the team.
	Offense player("Bob");
	Defense player1("Jane");
	Offense player2("Sai");
	Defense player3("Chin");
	Offense player4("Kali");
	Offense player5("Tom");
	Joynal  player6("Joynal");

	Player *team[7]; // Make a team of pointers to players.

	team[0] = &player;
	team[1] = &player1;
	team[2] = &player2;
	team[3] = &player3;
	team[4] = &player4;
	team[5] = &player5;
	team[6] = &player6;
	// Set the player numbers
	for(int i=0; i<7; i++)
		team[i]->setNumber(i+10);

	// Set the player minutes.
	for(int i=0; i<7; i++)
		team[i]->setMinutesPlayed(i*7+(i+1)*i+1);

	// Set the player's stats.
	player.setYards(34);
	player1.setTackles(5);
	player2.setYards(23);
	player3.setTackles(7);
	player4.setYards(132);
	player5.setYards(20);
	player6.setYards(96);
	player6.setTouchdowns(22);

	// Print out each player's stats.
	for(int i=0; i<7; i++)
		team[i]->printStats();

	system("pause");
}