#include <u.h>
#include <libc.h>

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?

Personal notes: Kinda like the AKS primality test.
*/

int
isfactor(u64int number, u64int divisor)
{
	return (number % divisor == 0);
}

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
	u64int i;
	u64int number = strtoull("600851475143", 0, 0);
	u64int start = 1;
	u64int end = number/start;
	u64int largest = 0;

	for(i=start; i<end; i++){
		if(isfactor(number, i) && isprime(number/i)){
			largest = number/i;
			break;
		}
	}

	print("Largest prime %lld\n", largest);
	exits(0);
}
