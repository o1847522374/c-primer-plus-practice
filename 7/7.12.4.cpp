#include<stdio.h>
int main(void)
{
	char ch;
	int count=0;
	while((ch=getchar())!='#')
	{
		if(ch=='.')
		{
			ch='!';
			count++;
		}
		else if(ch=='!')
		{
			putchar('!');
			count++;
		}
		printf("%c",ch);
		
	}
	printf("count:%d",count);
	return 0;
}
