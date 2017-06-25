#include <stdio.h>

int main(int argc, char const *argv[])
{
	int ratingcounters[11],i,response;

	for (i = 1; i <= 10; ++i)
		ratingcounters[i] = 0;
	printf("请输入\n");

	for (int i = 1; i <= 20; ++i)
	{
		scanf ("%d",& response);

		if (response < 1 || response > 10)
			printf("bad response: %d\n",response);
         else
         	++ratingcounters[response];
	}
printf("\n\nratibg number of response\n");
printf("- - -  - - - - - \n");

for (int i = 1; i <= 10; ++i)
    printf("%4d%14d\n",i,ratingcounters[i] );
	return 0;
}