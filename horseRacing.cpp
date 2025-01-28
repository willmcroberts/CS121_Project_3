#include <iostream>
#include <cstdlib>
#include <ctime>

void advanceHorse(int, int*);

int main() {
	int horses[5];
	bool keepGoing = true;
	const int TRACK_LENGTH = 15;

	while(keepGoing) {
		for (int i = 0; i < TRACK_LENGTH; i++) {
			advanceHorse(i, (&horses)[i]);
			for (int i = 0; i < 5; i++) {
				std::cout << horses[i];
			}
		//	printLane(i, horses[i]);
		//	if (isWinner(i, horses[i]) {
		//		keepGoing = false;
	//		} // end of if statement	
		} // end for loop
	} // end while loop

	return 0;
} // end main

void advanceHorse(int horseNum, int (&horses)[]) {
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		int coin = rand() % 2;
		if (coin == 1) {
			horses[i]++;
		} // end elif statement
	} // end for loop
} // end advance
