#include<stdio.h>
void chline(char ch,int i,int j);
int main(void)
{
	int i,j;
	char ch;
	scanf("%d%d %c",&i,&j,&ch);
	chline(ch,i,j);
	return 0;
}
void chline(char ch,int i,int j)
{
	for(int a=0;a<i;a++)
	{
		for(int b=0;b<j;b++)
			putchar(ch);
		putchar('\n');
	}
}
