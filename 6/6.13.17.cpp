#include<stdio.h>
int main(void)
{
	int years;
	float money=100;
	for(years=1;money>0;years++)
	{
		money*=1.08;
		money-=10.0;
	}
	printf("After %d years,the money would run out.\n",years);
	return 0;
}
