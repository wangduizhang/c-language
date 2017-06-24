#include <stdio.h>
/*
**十六进制转八进制
*/
int main(void)
{
	int rgbcolor;
	

	rgbcolor = 0xFFEF0D;
	printf("The answer is %#o\n", rgbcolor );
	return 0;
}