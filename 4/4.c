#include <u.h>
#include <libc.h>

/*
A palindromic number reads the same both ways. The largest
palindrome made from the product of two 2-digit numbers is
9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit
numbers. 
*/

int
numberofdigits(int number)
{
	int base = 10;
	int power = 1;
	int compare = pow(base, power);
	int digits = 0;

	while(1){
		if(number<compare){
			digits = power;
			break;
		}
		power++;
		compare = pow(base, power);
	}

	return digits;
}

int
ispalindrome(int number)
{
	int ispalindrome = 1;
	int i = 0;
	int digits[] = {0, 0, 0, 0, 0, 0};
	int divisor = number;

	while(divisor > 0){
		digits[i] = divisor % 10;
		divisor /= 10;
		++i;
	}

	int length = numberofdigits(number);

	for(i=0; i<length; i++){
		if(digits[i] != digits[length-i-1]){
			ispalindrome = 0;
			break;
		}
	}

	return ispalindrome;
}

void
main()
{
	int product;
	int largest = 0;

	for(int digit1=999; digit1>0; digit1--){
		for(int digit2=999; digit2>0; digit2--){
			product = digit1 * digit2;
			if(ispalindrome(product) == 1){
				if(product>largest){
					largest = product;
				}
			}
		}
	}

	print("Largest palindrome: %d\n", largest);
	exits(0);
}
