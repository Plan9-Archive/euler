#include <u.h>
#include <libc.h>

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

	print("Total sum: %d\n", sum);
	exits(0);
}
