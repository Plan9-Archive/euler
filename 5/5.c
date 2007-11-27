#include <u.h>
#include <libc.h>

/*
2520 is the smallest number that can be divided by each of the
numbers from 1 to 10 without any remainder.
 
What is the smallest positive number that is evenly divisible by
all of the numbers from 1 to 20? 
*/

void
main()
{
	int number = 0;
	int smallest = 0;

	while(smallest == 0){
		for(int i = 1; i < 21; ++i){
			if(number % i != 0){
				break;
			}
			if(i == 20){
				smallest = number;
			}
		}
		++number;
	}

	print("Smallest positive number: %d\n", smallest);
	exits(0);
}
