//自动变量与局部变量区别
#include <stdio.h>

void auto_static(void)
{
	int autovar = 1;
	static int staticvar = 1;


	printf("automatic = %d,static = %d\n",autovar,staticvar);
	++ autovar;
	++ staticvar;
}

int main(void)
{
	int i;
	void auto_static(void);

	for(i = 0; i<10;++i)
		auto_static();
	return 0;
}