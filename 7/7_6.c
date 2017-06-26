#include <stdio.h>
/*
**字符串数组的两种声明初始化
*/
int main(int argc, char const *argv[])
{
	char word[] = {'h','e','l','l','o','!'};
	char word2[] = "hello!";



	for (int i = 0; i < 6; ++i)
	    printf("%c", word[i]);
	printf("\n");
	for (int i = 0; i < 6; ++i)
	    printf("%c", word2[i]);
	printf("\n");
	return 0;
}