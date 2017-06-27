ll#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct date dateUpdate (struct date today)
{
	struct date tomorrw;
	int numberofdays(struct date d);

	if (today.day != numberofdays (today)){
		tomorrw.day = today.day+1;
		tomorrw.month = today.month;
		tomorrw.year = today.year;
	}
	else if (today.month == 12){
		tomorrw.day = 1;
		tomorrw.month = 1;
		tomorrw.year = today.year + 1;
	}
	else {
		tomorrw.day = 1;
		tomorrw.month = today.month+1;
		tomorrw.year = today.year;
	}
	return tomorrw;
};



int numberofdays (struct date d)
{
	int days;
	bool isleapyear(struct date d);
	const int daydpermonth[13] =
	{0,31,28,31,30,31,30,31,31,30,31,30,31};

	if (isleapyear && d.month == 2)
		days = 29;
	else
		days = daydpermonth[d.month];

	return days;
}


bool isleapyear (struct date d)
{
	bool leapyearflag;

	if ((d.year % 4 == 0 && d.year % 100!= 0)|| d.year % 400 == 0){
		leapyearflag = true;
		printf("是闰年\n");
	}
	else{
		leapyearflag = false;
		printf("不是闰年\n");
	}

	return leapyearflag;
}




int main(void)
{
	struct date dateUpdate (struct date today);
	bool isleapyear(struct date d);
	
	struct date thisday, nextday;

	printf("输入今天的日期：\n");
	scanf ("%d%d%d",&thisday.month,&thisday.day,&thisday.year);

	nextday = dateUpdate(thisday);

	printf("今天是%d月%d日%.2d年，明天是%d月%d日%.2d年\n",
		thisday.month,thisday.day,thisday.year,nextday.month,
		nextday.day,nextday.year );
	isleapyear(thisday);

	return 0;
}