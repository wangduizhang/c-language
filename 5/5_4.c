#include <stdio.h>

int main(void)
{
	int number;

	while(1) {
	int sum =0; 
	printf ("你要求算的个数:");
	scanf ("%d", &number);
	
	if (number == 0)
	    break;
	for (int i = 1; i <= number; ++i)
	{	
		sum += i;
		printf("%d\t%d\n",i, sum );
	}
    }
	return 0;
}