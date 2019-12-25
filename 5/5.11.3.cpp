#include<stdio.h>
int main(void)
{
	int days;
	printf("Please input day's number:");
	scanf("%d",&days);
	while(days>0)
	{
		printf("%ddays are %dweeks,%ddays.\nPlease input day's number:",days,days/7,days%7);
		scanf("%d",&days);
	}
	return 0;
	
 } 
