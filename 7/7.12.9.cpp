#include<stdio.h>
int main(void)
{
	long nu,i=2,test;
	printf("Please input a number:");
	scanf("%ld",&nu);
	printf("The odd number(<=%ld):\n",nu);
	for(test=nu;test>=1;test--)
		for(i=2;i<test;)
		{
			if(test%i==0)
				break;
			i++;
			if(i==test)
				printf("%-ld\t",test);
				
		}
	printf("2");
	return 0;
} 
