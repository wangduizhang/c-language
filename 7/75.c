#include <stdio.h>

int main(int argc, char const *argv[])
{
	int numbers[10] = {1,0,0,0,0,0,0,0,0,0};
	int result[10] = {1,1,2,4,8,16,32,64,128,256};
	int i,j;

	for (j = 0; j < 10;++j)
		for (i = 0; i<j;i++)
			numbers[j] += numbers[i];
	for (j = 0; j <10 ; ++j)
		printf("%d\n",numbers[j] );
		if (numbers[j] == result[j])
			printf("对");
		
	
}