#include<stdio.h>
#include<ctype.h>
int chnu(char ch);
int ifch(char ch);
int main(void)
{
	char ch;
	while((scanf("%c",&ch))!=EOF)
	{
		printf("%d\n",ifch(ch));
	}
	return 0;
}
int chnu(char ch)
{
	if(isupper(ch))	
		return (int)ch-64;
	else if(islower(ch))	
		return (int)ch-96;
}
int ifch(char ch)
{
	if(isalpha(ch))
		return chnu(ch);
	else
		return -1;
}
