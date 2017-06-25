#include <stdio.h>

int main(int argc, char const *argv[])
{
	float value, value1,value2;
	char yunfu;


    while(1) {
	printf("请输入你的数字与运算符\n");
	scanf ("%f %c" ,&value , &yunfu);
	if(yunfu =='E'){
		    printf("计算器退出\n");
		    return 0;
		}
	else if (yunfu == 'S')
	{
		value2 = value;
		printf("= %f\n", value2 );
        while(1) {
        	scanf ("%f %c" ,&value1,&yunfu);
        	switch(yunfu)
	   		{
			case '+':
		    	printf("%.2f\n",value2+value1);
		    	break;
			case '-':
		    	printf("%.2f\n",value1-value2);
		    	break;
			case '*':
		    	printf("%.2f\n",value2*value1);
		    	break;
		    case 'S':
		    	value2 = value1;
		    	printf("=%f\n",value2);
		    	break;
			case '/':
		    	if (value2 == 0){
		        	printf("分母不能为0！\n");
		        	break;
		    	}
		    	else{
		        	printf("%.2f\n",value1 / value2);
		            break;
		        }
		    case 'E':
		        	printf("计算器退出\n");
		        	return 0;
		    default:
		         printf("未知的运算符\n");
		         break;
		    
	    }

        }
		
	}
	else{
		value1 = value;
		scanf ("%f" ,&value2);
		    switch(yunfu)
	   		{
			case '+':
		    	printf("%.2f\n",value2+value1);
		    	break;
			case '-':
		    	printf("%.2f\n",value1-value2);
		    	break;
			case '*':
		    	printf("%.2f\n",value2*value1);
		    	break;
			case '/':
		    	if (value2 == 0){
		        	printf("分母不能为0！\n");
		        	break;
		    	}
		    	else{
		        	printf("%.2f\n",value1 / value2);
		            break;
		        }
		    case 'E':
		        	printf("计算器退出\n");
		        	return 0;
		    default:
		         printf("未知的运算符\n");
		         break;

	}
}
}

}
