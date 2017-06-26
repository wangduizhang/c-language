#include <stdio.h>

int main(int argc, char const *argv[])
{
	int shuzu1[3] = {1,2,3};
	int shuzu2[3] = {1,2};
	int shuzu3[3];
	for (int i = 0; i < 3; ++i)
		printf("%d",shuzu1[i] );
	printf("\n");
	for (int i = 0; i < 3; ++i)
		printf("%d",shuzu2[i] );
	printf("\n");
	for (int i = 0; i < 3; ++i)
		printf("%d",shuzu3[i] );
	printf("\n"); 

	return 0;
}