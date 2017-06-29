#include <stdio.h>

struct date
{
	int year;
	int month;
	int day;
};


int f_(struct date adate)
{
    if (adate.month <= 2)
        return adate.year - 1;
    else
    	return adate.year;
}


int g_(struct date adate)
{
    if (adate.month <= 2)
        return adate.month+13;
    else
    	return adate.month + 1;
}

int N_(struct date adate)
{
    int f_(struct date adate);
    int g_(struct date adate);

	return 1461 * f_(adate) / 4 + 153 * g_(adate)/5 + adate.day;
}


int main(void)
{
	int N_(struct date adate);

	struct date adate1;
	adate1 = (struct date){2004,8,8};

	struct date adate2;
	adate2 = (struct date){2005,2,22};

	int n1 = N_(adate1);
	int n2 = N_(adate2);
	int n = n2 - n1;
	printf("%d:%d:%d\n",n1,n2,n );

	return 0;
}