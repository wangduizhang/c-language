#include <stdio.h>
#include <stdbool.h>

/*打印一定范围内的质数*/

#define NUMBER 10000


int main(int argc, char const *argv[])
{
	bool isprime ;
	int primes[NUMBER] = {2,3},primeindex = 2,n = 0;
	int ii;


	for (int p = 5; p < NUMBER; ++p)
	{
			isprime = true;

			for (int s = 0; isprime && s < NUMBER; ++s)
			{
				ii = s;
				
				/*用质数数组中的质数验证*/
				if (primes[s] != 0 && p % primes[s] == 0)
					isprime = false;
                

                /*验证小于p的平方根的数*/
                if (ii > 2 && ii < p / ii && p % ii == 0 && isprime == true)
                	isprime = false;

    
		           }
		    if (isprime)
		    {
		    primes[primeindex] = p;
		    primeindex ++;
            }    

	}
	
	for (int i = 0; primes[i] != 0 &&i < NUMBER; ++i)
	   { printf("%d ",primes[i] );
	   	    n++;}
	printf ("%d内，共有%d 个质数\n",NUMBER,n);

	return 0;
}