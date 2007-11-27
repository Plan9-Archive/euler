#include <u.h>
#include <libc.h>

/*
A Pythagorean triplet is a set of three natural numbers,
a < b < c , for which, 

a^2 + b^2 = c^2 

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
c
There exists exactly one Pythagorean triplet for which
a + b + c = 1000. 

Find the product abc. 
*/

void
main()
{
	int product;
	int a;
	int b;
	int c;

	for(int m = 0; m < 100; m++){
		for(int n = 0; n < 100; n++){
			// Euclid's formula
			a = pow(m, 2) - pow(n, 2);
			b = 2 * m * n;
			c = pow(m, 2) + pow(n, 2);

			if (a + b + c == 1000){
				product = a * b * c;
			}
		}
	}

	print("Product: %d\n", product);
	exits(0);
}
