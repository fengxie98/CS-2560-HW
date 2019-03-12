// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Dice {
public:
	int roll() {
		return rand() % 6 + 1;
	}
};

int main() {
	srand(time(0));
	Dice r1, r2;
	int playerRoll = 0;
	int cpuRoll = 0;
	while (true) {
		int yes=1;
		cout << "Thank you for playing my game of 21!\n ";
		cout << "Roll die? (1 = yes, 2 = no):\n ";
		cin >> yes;
		if (yes != 1) break;
		cpuRoll += r1.roll() + r2.roll();	
		playerRoll += r1.roll() + r2.roll();
		cout << "Your total is " << playerRoll << "\n";
		if (playerRoll > 21) break;
	}
	cout << "Your total: " << playerRoll << "\n";
	cout << "Cpu total: " << cpuRoll << "\n";
	if (playerRoll <= 21 && playerRoll == cpuRoll) {
		cout << "Tie\n";
	}
	else if (playerRoll <= 21 && playerRoll > cpuRoll) {
		cout << "You win!\n";
	}
	else if (playerRoll <= 21 && cpuRoll > playerRoll) {
		cout << "You lose :( Cpu was closer to 21 than you\n";
	}
	else {
		cout << "You lose :( total got over 21 :(\n";
	}
}

