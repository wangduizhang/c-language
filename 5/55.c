#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, two_to_the_n;
	
	printf("TABLE OF POWERS OF TWO\n\n");
	printf("n 2 to the n\n");
	printf("- - - - - - - - - - - - -\n");
	
	two_to_the_n = 1;
	
	for (n = 0; n <=  10; ++n){
		printf("%2d %d\n",n,two_to_the_n );
		two_to_the_n  *= 2;
	}
	
	return 0;
}