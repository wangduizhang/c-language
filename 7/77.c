#include <stdio.h>
#include <stdbool.h>


/*埃拉托尼算法失败*/
int main(int argc, char const *argv[])
{
	int number = 100; 
	int index = 2;
    int numbers[number+1];
    int maxlist = number; 
    bool s = true;


    
    for(int i = 0 ; i <number+1 ;++i)
    	numbers[i] = i;


	while(s) {
	for ( int i = index + 1 ; numbers[i] != 0 && i <= number;++i){
		
		while(numbers[index] == 0)
			++index;
		
		if ( index*index > maxlist){
			s = false;
			break;
		}

		if ((numbers[index] != 0) && (numbers[i] % numbers[index]) == 0){
			numbers[i] = 0;
			while(numbers[maxlist] == 0)
			--maxlist;
	    }
		
		}
	}

   for(int i = 2; numbers[i]!= 0 && i <= number; ++i)
     printf("%d",numbers[i] );
}