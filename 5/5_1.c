#include <stdio.h>


#define NUMBER 10


int main(void)
{
	
    int number = 1, sum = 0 ;
    int sum2 = 0;

	while(number <= NUMBER) {
	    sum += number;
	    number ++;
	}
	
	for (int i = 0; i <= NUMBER; ++i)
	sum2 += i;
	printf("%d\n", sum );
	printf("%d\n", sum2);
	
}
	


