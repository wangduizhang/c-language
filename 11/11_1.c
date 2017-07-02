#include <stdio.h>


int main(int argc, char const *argv[])
{
	struct date
	{
		int month;
		int day;
		int year;

	};

	struct date today,*dateptr;

	dateptr = &today;

	dateptr ->month = 9;
	dateptr ->day = 25;
	dateptr ->year = 2004;


	printf(" today date is %i/%i/%.2i\n",dateptr ->month,\
		dateptr ->day,dateptr ->year%100);

	return 0;
}


