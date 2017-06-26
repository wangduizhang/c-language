#include <stdio.h>

int minumum(int values[],int numberofelements)
{
	int minvalue ,i;
	
	minvalue = values[0];

	for (i = 1;i<numberofelements;i++)
		if (values[i] < minvalue)
			minvalue = values[i];
		return minvalue;
}


int main(int argc, char const *argv[])
{
	int arry1[5] = {3,4,5,6,-1};
	int arry2[7] = {2,3,4,5,6,7,-2};
	int minumum(int values[],int numberofelements);

	printf("1:%d\n",minumum(arry1,5) );
	printf("2:%d\n",minumum(arry2,7) );
	return 0;
}