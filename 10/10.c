#include <u.h>
#include <libc.h>

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

int
isprime(u64int prime)
{
	u64int i;
	u64int start = 2;
	u64int end = prime/start;
	int isprime = 1;

	for(i=start; i<end+1; i++){
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
	u64int iterate = 2;
	u64int prime = 2;
	u64int sum = 0;

	while(iterate < 2000000){
		if(isprime(iterate)){
			prime = iterate;
			sum += prime;
			print("Adding: %d\n", prime);
		}
		iterate++;
	}

	print("Sum: %lld\n", sum);
	exits(0);
}
