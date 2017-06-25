#include <stdio.h>
/*
**测试格式化输出
*/
int main(int argc, char const *argv[])
{
	int n, two_to_the_n;
	two_to_the_n = 1;
	
	for (n = 1; n <=  1; ++n){
		printf(" 2d |%2d %d\n",n,two_to_the_n );
		printf("-2d |%-2d %d\n",n,two_to_the_n );
		printf(".2d |%.2d %d\n",n,two_to_the_n );
		two_to_the_n  *= 2;
	}
	
	return 0;
}