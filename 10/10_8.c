#include <stdio.h>
#include <stdbool.h>

//读取一行数据
void readline(char buffer[])
{
	char character;
	int i = 0;
	
	do
	{
		character = getchar();
		buffer[i] = character;
		++i;
	}while(character != '\n');
	
	buffer[i-1] ='\0';
}
//判断一个字符是否为字母
bool alphabetic(const char c)
{
	if ((c >= 'a'&& c <= 'z')||(c >= 'A' && c <= 'Z'))
		return true;
	else
		return false;
}
//计算字符串中单词个数
int countwords(const char string[])
{
	int i , wordcount = 0;
	bool lookingforword = true ,alphabetic(const char c);

	for (i = 0; string[i] != '\0'; ++i)
	{
		if (alphabetic(string[i]))
		{
			if (lookingforword)
		    {	
		    	++wordcount;
			 	lookingforword = false;
			 }
		}
		else
			lookingforword = true;
	}
	return wordcount;
}
int main(void)
{
	void readline(char buffer[]);
	int countwords(const char string[]);


    char text[81];
    int totalwords = 0;
    void readline(char buffer[]);
    bool endoftext = false;

    printf("输入你的文本：\n");
    printf("输入完成后，连续回车。\n");

    while(!endoftext){
    	readline(text);
    	if (text[0] =='\0')
    		endoftext = true;
    	else
    		totalwords += countwords(text);
    }
    printf("\n 有%d个单词在文本！\n",totalwords);
	return 0;
}

