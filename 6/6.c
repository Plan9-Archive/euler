#include <u.h>
#include <libc.h>

/*
The sum of the squares of the first ten natural numbers is, 
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is, 
(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first
ten natural numbers and the square of the sum is
3025 − 385 = 2640.

Find the difference between the sum of the squares of the first
one hundred natural numbers and the square of the sum.
*/

void
main()
{
	u64int sumofsquares = 0;
	u64int squareofsum = 0;
	u64int difference = 0;

	for(int i = 1; i < 101; ++i){
		sumofsquares += pow(i, 2);
		squareofsum += i;
	}
	squareofsum = pow(squareofsum, 2);
	difference = squareofsum - sumofsquares;

	print("Difference: %lld\n", difference);
	exits(0);
}
