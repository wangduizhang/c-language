#include <stdio.h>

int main(int argc, char const *argv[])
{
	int integervar = 100;
	float floatingver = 331.79;
	double doublevar = 8.44e+11;
	char charvar = 'w';

	_Bool boolvar = 0;

	printf("integervar = %d\n", integervar );
	printf("floatingver = %6.9f\n", floatingver);
	printf("doublevar = %f\n", doublevar);
	printf("doublevar = %e\n", doublevar);
	printf("doublevar = %g\n", doublevar);
	printf("charvar = %c\n", charvar);

	printf("boolvar = %i\n", boolvar );
	printf("boolvar = %d\n", boolvar );
	return 0;
}