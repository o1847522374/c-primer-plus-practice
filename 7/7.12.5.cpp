#include<stdio.h>
int main(void)
{
	char ch;
	int count=0;
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
			case '.':count++;ch='!';break;
			case '!':count++;putchar(ch);break;
		}
		printf("%c",ch);
		
	}
	printf("count:%d",count);
	return 0;
}
