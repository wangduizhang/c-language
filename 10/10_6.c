#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char line[81];
	void readline (char buffer[]);

	for (i = 0; i < 3; ++i)
	{
		readline(line);
		printf("%s\n\n", line);
	}
	return 0;
}


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
