#include <u.h>
#include <libc.h>

/*
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains
10 terms. Although it has not been proved yet (Collatz Problem), it is thought
that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.
*/

void
main()
{
	u64int i, x;
	static u64int operations[1000000];

	u64int value = 1;
	u64int score = 0;

	for(i=1;i<1000000;i++){
		x=i;
		while(x != 1){
			if(x<1000000 && operations[x] != 0){
				operations[i] += operations[x];
				break;
			}
			if(x % 2 == 0){
				x = x/2;
			}else{
				x = (x*3)+1;
			}
			operations[i]++;
		}
		if(operations[i]>score){
			score=operations[i];
			value=i;
		}
	}
	
	print("%lld had %lld operations\n", value, score);

	exits(0);
}
