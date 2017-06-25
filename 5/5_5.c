#include <stdio.h>

int main(void)
{
	
	int u , v, temp;
	printf("第1个数：");
	scanf ("%d",&u);
	printf("第1个数：");
	scanf ("%d",&v);
	while(1) {
	    if (v == 0){
	    	printf("最大公约数：%d\n", u );
	        break;
	     }
	    else{
	    	temp = u%v;
	    	u = v;
	    	v = temp ;
	    }
	}
	return 0;
}