#include <stdio.h>
#include <string.h>

void test_scanf(void)
{
    char string_[5];

	printf("输入你的字符串\n");
	scanf("%7s",string_);
	printf("%s\n",string_);
}


void test_fori(void)
{
    int j;
    int ii = 0;

	for (int i = 0; i < 9; ++i)
		ii+=ii;
	for (j = 0; j<9; j++)
		ii+=ii;
	printf("i在for内:%d\nj在开头处：%d\n",i,j);

}
int main()
{
	void test_scanf(void);
	void test_fori(void);


	test_scanf();
	test_fori();
	return 0;
}