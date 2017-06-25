#include <stdio.h>


#define NUM 10
int main(int argc, char const *argv[])
{
	
	printf("数字\t平方\n");
	for (int i = 1; i <= NUM; ++i)
	{
		printf("%d\t%d\n", i,i*i);
	}
	return 0;
}