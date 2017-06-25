#include <stdio.h>


#define NUM 10
int main(int argc, char const *argv[])
{
	int nums = 1;
	printf("数字\t阶乘\n");
	for (int i = 1; i <= NUM; ++i)
	{
		nums *= i;
		printf("%d\t%d\n", i,nums);
	}
	return 0;
}