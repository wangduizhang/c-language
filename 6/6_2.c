#include <stdio.h>

int main(int argc, char const *argv[])
{
	float value1, value2;
	char operator;

	printf("Type in your exression.\n");
	scanf ("%f %c %f" ,&value1,&operator,&value2);
	
	switch(operator)
	{
		case '+':
		    printf("%.2f\n",value2+value1);
		case '-':
		    printf("%.2f\n",value1-value2);
		case '*':
		    printf("%.2f\n",value2*value1);
		case '/':
		    if (value2 == 0)
		        printf("分母不能为0！\n");
		    else
		        printf("%.2f\n",value1 / value2);
	}
	return 0;
}