//求一元二次方程的根
#include <stdio.h>
#include <math.h>


float abs_(float a)
{
	if (a<0)
	   a = -a;
	return a;
}


float squ(float x)
{
	const float espilon = 0.00001;
	float guess = 1.0;
	float abs_(float a);
    


    while(abs_(guess*guess -x)>= espilon)
    	guess = (x/guess+guess)/2.0;
    return guess;

}



void s_root(float a,float b,float c)
{
	float re,x1,x2;

	re = pow(b,2) - 4 *  a * c;
	if (re < 0)
		printf("根是复数\n");
	else
		{
		x1 = (-b + squ(re))/(2*a);
	    x2 = (-b - squ(re))/(2*a);
	printf("X1 = %.3f\nX2 = %.3f", x1,x2);
	printf("\n");
}


}






int main()
{
	void s_root(float a,float b,float c);
    float a,b,c;
	printf("输入a：");
	scanf ("%f" ,&a);
	printf("输入b：");
	scanf ("%f" ,&b);
	printf("输入c：");
	scanf ("%f" ,&c);

	s_root(a,b,c);

	return 0;
}