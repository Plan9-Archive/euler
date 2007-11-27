#include <u.h>
#include <libc.h>

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
we can see that the 6th prime is 13.

What is the 10 001st prime number? 
*/

int
isprime(u64int prime)
{
	u64int i;
	u64int start = 2;
	u64int end = prime/start;
	int isprime = 1;

	for(i=start; i<end; i++){
		if(prime % i == 0 || prime % (i+2) == 0){
			isprime = 0;
			break;
		}
		end = floor(prime/i);
	}

	return isprime;
}

void
main()
{
	int found = 0;
	int iterate = 2;
	int prime = 2;

	while(found < 10002){
		if(isprime(iterate)){
			prime = iterate;
			found++;
		}
		iterate++;
	}

	print("Prime number: %d\n", prime);
	exits(0);
}
