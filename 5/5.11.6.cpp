#include<stdio.h>
#include<math.h>
int main(void)
{
	int days;

	printf("input day number:");
	while(scanf("%d",&days)==1)
	{
		int money=0;
	for(int i=1;i<=days;i++)
		money+=pow(i,2);
	printf("money=%d\n""input day number:",money);
	}
	return 0;
 } 
