#include <iostream>
#include <cstdlib>
#include <ctime>

void advanceHorse(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);
const int TRACK_LENGTH = 15;

int main() {
	int horses[5] = {0};
	bool keepGoing = true;
	
	srand(time(NULL));

	while(keepGoing) {
		for (int i = 0; i < 5; i++) {
			advanceHorse(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses)) {
				keepGoing = false;
			} // end of if statement
		} // end for loop
	} // end while loop

	return 0;
} // end main

void advanceHorse(int horseNum, int* horses) {
	for (int i = 0; i < 5; i++) {
		int coin = rand() % 2;
		if (coin == 1) {
			horses[horseNum]++;
		} // end elif statement
	} // end for loop
} // end advanceHorse

void printLane(int horseNum, int* horses) {
	for (int i = 0; i < TRACK_LENGTH; i++) {
		if (i == horseNum) {
			std::cout << horses[horseNum] << " ";
		} else {
			std::cout << ". ";
		} // end elif statement
	} // end for loop

	std::cout << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horses) {
	bool result = false;
	if (horses[horseNum] >= TRACK_LENGTH) {
		result = true;
		std::cout << "HORSE " << horses[horseNum] << " WINS!!!" << std::endl;
	} // end if statement

	return result;
} // end isWinner
