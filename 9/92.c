#include <stdio.h>
#include <stdbool.h>

//这是一个有毛病的测试

struct time
{
    int h;
    int m;
    int s;

};

struct  time elapsed_time(bool today,struct time nowtime,struct time rtime)
{
    struct time result;
    
    //if(today){
    	if (nowtime.s < rtime .s)
    	{
    		if (nowtime.m <= rtime.m)
    		{
    			result.s = nowtime.s + 60 - rtime.s;
    			result.m = nowtime.m + 59 - rtime.m;
    			result.h = nowtime.h - rtime.h -1; 
    		}
    		else{
    			result.s = nowtime.s + 60 - rtime.s;
    			result.m = nowtime.m - rtime.m;
    			result.h = nowtime.h - rtime.h; 
    		}
    	}


        else if (nowtime.s == rtime.s){

        	if (nowtime.m < rtime.m){
    			result.s = 0;
    			result.m = nowtime.m + 60 - rtime.m;
    			result.h = nowtime.h - rtime.h -1; 
    		}
    		else if(nowtime.m == rtime.m){
    			result.s = 0;
    			result.m = 0;
    			result.h = nowtime.h - rtime.h;
    		}

    		else{
    			result.s = 0;
    			result.m = nowtime.m - rtime.m;
    			result.h = nowtime.h - rtime.h;
            }
    	}


    	else{
    		if (nowtime.m < rtime.m){
    			result.s = nowtime.s - rtime.s;
    			result.m = nowtime.m + 60 - rtime.m;
    			result.h = nowtime.h - rtime.h -1; 
    		}
    		else if(nowtime.m == rtime.m){
    			result.s = nowtime.s - rtime.s;
    			result.m = 0;
    			result.h = nowtime.h - rtime.h; 
    		}

    		else{
    			result.s = nowtime.s - rtime.s;
    			result.m = nowtime.m - rtime.m;
    			result.h = nowtime.h - rtime.h;
            }
    	}
    //}
    return result;
}


int main(int argc, char const *argv[])
{
	struct time elapsed_time(bool today,struct time nowtime,struct time rtime);

    bool today = true;
    
    //测试同天
	struct time nowtime;
    struct time rtime;
    struct time result;
    struct time testresult;
    struct time lastresult;
    lastresult = (struct time){12,0,1};



    #if 0
    char choice = '0';
    printf("两个时间是否是同天？1.同天 2.第二天\n");
    while(1){
        scanf ("%c",&choice);
    	if (choice == '1')
            break;
        else if (choice =='2'){
            today = false;
            break;
        }
        else
            printf("输入有误!\n");
    }
    #endif

    for (int nh = 12; nh < 24; ++nh){
    	for (int nm = 0; nm <60 ; ++nm){
    		for (int ns = 0; ns <60 ; ++ns){
    			    for (int rh = 0; rh < 12; ++rh){
    					for (int rm = 0; rm <60 ; ++rm){
    						for (int rs = 0; rs <60 ; ++rs){
    							    
    							    nowtime = (struct time){nh,nm,ns};
    							    rtime = (struct time){rh,rm,rs};
                                    
                                    result = elapsed_time(today,nowtime,rtime);
                                    testresult = elapsed_time(today,lastresult,result);
                                    lastresult = result;
                                    
                                    if (testresult.h == 0&& testresult.m == 0 && testresult.s == 1)
                                    	printf("正确——— " );
                                    else{
                                    	printf("错误\n");
                                        return 0;
                                    }
    					}
    				}
    			}
    		}
    	}
    }
}
