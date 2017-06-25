#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int number;
	int sum = 0;

	printf("你的数字：\n");
	scanf ("%d", &number);

	while(number != 0 ){
	    sum += number % 10;
	    number /= 10;
	}
	printf("%d\n",sum ); 

}