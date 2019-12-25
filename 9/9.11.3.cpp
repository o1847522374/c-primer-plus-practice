#include<stdio.h>
void chline(char ch,int a,int b);
int main(void)
{
	int a,b;
	char ch;
	scanf(" %c%d%d",&ch,&a,&b);
	chline(ch,a,b);
	return 0;
}
void chline(char ch,int a,int b)
{
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
			putchar(ch);
		putchar('\n');
	}
}
