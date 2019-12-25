#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int up=0,lo=0;
	while((ch=getchar())!=EOF)
	{
		if(isupper(ch))	up++;
		if(islower(ch))	lo++;
	}
	printf("upper:%d\nlower:%d\n",up,lo);
	return 0;
}
