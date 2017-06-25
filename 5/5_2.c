#include <stdio.h>


#define NUMBER 10


int main(void)
{
    int sum2 = 0;
	
	for (int i = 1; i <= NUMBER; ++i){
	sum2 += i;
	printf("%3d\t%3d\n", i , sum2);
	}
}