#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

/*进制转化*/
 int main(int argc, char const *argv[])
 {
 	
 	
 	int ten_;
 	int input_jinzhi;
 	int to_ten(int input_jinzhi,int input_number);
 	int input_number;
 	bool s = true;
 	#if 0

 	int yushu[];
 	int out_jinzhi,;
    int yu;
 	#endif
    


    /*转换为十进制*/

 	printf("你要转换的数字的进制：");
 	while (s){
 		scanf ("%d",&input_jinzhi);
 		if (input_jinzhi < 2 | input_jinzhi > 10)
 			{printf("错误的进制数\n");
 		     printf("重新输入:");
 			s = true;}
 		else
 			s = false;
 	}
 	printf("输入你要转换的数：" );
 	do{
 	scanf ("%d" , &input_number);
 	ten_ = to_ten(input_jinzhi,input_number);
 	if (ten_ == -1)
 	    {printf("错误的%d进制数字\n",input_jinzhi );
 	     printf("重新输入:");
 	     s = true; }
    else
    	{printf("%d的十进制是%d\n",input_number,ten_ );
    	 s = false;}
    
    }while(s);
    printf("\n");

    /*转换目标进制*/


    #if 0
 	printf("你要转换的数字的进制：");
 	s = true
 	while s{
 		scanf ("%d",&out_jinzhi);
 		if (out_jinzhi < 2 | out_jinzhi > 16)
 			s = true;
 		else
 			s = false;

    printf("%d\n", out_(out_jinzhi,ten_) );
    printf("\n");
    #endif

  	return 0;
 }

/*转换为十进制*/
int to_ten(int input_jinzhi,int input_number)
 {
 	
 	int ten_ = 0;
 	int maxtenci,tenci; 
 	int num;

 	bool s = true,err = true;
 	
#if 0 
 	const char jinzhi_16[16] = "0123456789ABCDEF";
 	char jinzhi_[100];
 	int indexstar = 0;
 #endif
    
 	if (input_jinzhi == 10 | input_number == 0)
         return input_number;

     /*2-10进制*/
    if (input_jinzhi < 10)
    {
    	
    	while(s) {
    	for (int i = 0; i < 100 && input_number != 0;i++)
    	{
    		tenci = pow(10,i);
    		
    		if (input_number/tenci == 0){
    			maxtenci = pow(10,i-1);
    			num = input_number/ maxtenci;
    			
    			if (num >= input_jinzhi){
    				s = false;
    				err = false;
    				break;
    			}
    			
    			ten_ += num * pow(input_jinzhi,i-1);
    			input_number = input_number % maxtenci;
    			if (input_number == 0)
                s = false;
    			break;
    	    }
    		}
    }
    }    
    #if 0
    /*11-16进制*/
    if (input_jinzhi > 10)
    {
        err = false;

        char chnum[100] = itoa(input_number);
        for (int i = 0; i < input_jinzhi; ++i)
        	jinzhi_[i] = jinzhi_16[i];
        int indexend = sizeof(chnum)/sizeof(chnum[0])

        while(s) {
            for (int i = 0; i <= 16; ++i)
            {
                if (jinzhi_[i] == chnum[indexstar])
                {
                	ten_ += i * pow(input_jinzhi, indexend)
                	index++;
                	indexend--;
                	break;
                }

            
            }
        if (indexend <0){
        	err = true;
        	break;
            }
        }  
    }
    #endif

    if(err)
    	return ten_;
    else
    	return -1;
}