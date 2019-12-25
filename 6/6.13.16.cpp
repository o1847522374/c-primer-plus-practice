#include<stdio.h>
int main(void)
{
	int years;
	float da=100,de=100;
	for(years=1;da>=de;years++)
	{
		da+=10.0;
		de=de+de*0.05;
	}
	printf("years=%d,da=%f,de=%f",years,da,de);
	return 0;
 } 
