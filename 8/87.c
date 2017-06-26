//计算整数的正整数次方

#include <stdio.h>

long int x_to_the_n(int x, int n )
{
	long int result = 1;

	for (int i = 1;i<=n;i++)
		result *= x;

	return result;
}

int main()
{
	int x,n;
	long int x_to_the_n(int x,int n);


	printf("输入底数：");
	scanf("%d",&x);
	printf("输入指数：");
	scanf("%d",&n);

	printf("%ld\n",x_to_the_n(x,n) );
	return 0;
}