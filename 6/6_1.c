#include <stdio.h>
int main(int argc, char const *argv[])
{
	float value1, value2;
	char operator;

	printf("Type in your exression.\n");
	scanf ("%f %c %f" ,&value1,&operator,&value2);
	
	if (operator == '+')
		printf("%.2f\n",value2+value1);
	else if (operator == '-')
		printf("%.2f\n",value1-value2);
	else if (operator == '*')
		printf("%.2f\n",value2*value1);
	else if (operator == '/')
		if (value2 == 0)
		    printf("分母不能为0！\n");
		else
		    printf("%.2f\n",value1/value2);
	else
		printf("未知的运算符\n");

	return 0;
}