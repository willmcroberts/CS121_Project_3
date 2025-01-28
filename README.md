# Horse racing
Create a *horse racing* program
## Algorithm

#include <iostream>
#include <cstdlib>
#include <ctime>

### Main
int horses[5] = {0,0,0,0,0}
boolean keepGoing

while keepGoing:
	for i in range of (0,5):
        	andvance(i, horses[i])
		printLane()
		       if (isWinner(i, horses[i])
				       keepGoing = false	
	
	

### void advance(int horseNum, int(pointer) horses);
given a horse number
generate a random int 0 or 1 
if random equals 1:
	postions++

### void printLane(int horseNum, int(pointet) horses);
given a horses number
loop from zero to track length
	if the current loop is equal to the horses value
		print the horses number
	else
		print .

### bool isWinner(int horseNum, int(pointer) horses);

result = false
given horse number
if the current horse's value is greater than track lenght:
	result = true
	print horse (ID) wins
return result
