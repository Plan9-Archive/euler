#include <u.h>
#include <libc.h>

/*
Each new term in the Fibonacci sequence is generated by
adding the previous two terms. By starting with 1 and 2, the
first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose
values do not exceed four million, find the sum of the 
even-valued terms.
*/

void
main()
{
	int sum = 0;
	int onebefore = 1;
	int twobefore = 0;
	int startat = 2;
	int max = 4000000;
	int fib = startat;

	while(fib < max){
		if(fib % 2 == 0){
			sum += fib;
		}
		twobefore = onebefore;
		onebefore = fib;
		fib += twobefore;
	}

	print("Sum: %d\n", sum);
	exits(0);
}