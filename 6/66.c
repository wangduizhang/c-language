#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int number,num,pp;
    int jj = 0, numberc = 0;

	printf("请输入一个整数\n");
	scanf("%d",&number);
	if (number == 0)
	{
		printf("zero\n");
	}



	while(number != 0) {
	    for (int i = 1; i <= 10; ++i)
	    {
	    	num = number / pow(10,i);
	    	if (num == 0)
	    	{   
	    		pp = pow(10,i-1);
	    		num = number / pp;

                if (numberc !=0){
                jj = numberc - i;
            }

                numberc = i;
	    		number = number % pp;

            if (jj >= 2)
                for (int a = 0; a < jj-1; ++a)
                {
                printf("zero ");
                }
	    	switch(num)
           {
        	case 1:
        	printf("one ");
        	break;
        	case 2:
        	printf("two ");
        	break;
        	case 3:
        	printf("three ");
        	break;
        	case 4:
        	printf("four ");
        	break;
        	case 5:
        	printf("five ");
        	break;
        	case 6:
        	printf("six ");
        	break;
        	case 7:
        	printf("seven ");
        	break;
        	case 8:
        	printf("eight ");
        	break;
        	case 9:
        	printf("nine ");
        	break;

        }
        break;


	    	}

	    }

    }
    for (int i = 1; i < numberc; ++i)
        printf("zero ");
}