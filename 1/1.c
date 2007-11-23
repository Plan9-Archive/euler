#include <u.h>
#include <libc.h>

/*
If we list all the natural numbers below 10 that are multiples
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is
23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

void
main()
{
	int max = 1000;
	int multiples[] = {3, 5};
	int multipleslength = (&multiples)[1]-multiples;
	int sum = 0;

	for(int i=0; i<max; i++){
		for(int a=0; a<multipleslength; ++a) {
			if(i % multiples[a] == 0){
				sum += i;
				break;
			}
		}
	}

	print("Sum: %d\n", sum);
	exits(0);
}
