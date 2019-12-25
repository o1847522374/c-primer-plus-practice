#include<stdio.h>
int main(void)
{
	char ch;
	int count=0;
	while((scanf("%c",&ch))!=EOF)
	{
		count++;
	}
	printf("%d",count);
	return 0;
}
