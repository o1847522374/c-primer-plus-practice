#include<stdio.h>
int main(void) 
{
	long upnu,downnu;
	int i;
	
	printf("Please intput down and up number:");
	scanf("%ld%ld",&downnu,&upnu);
	while(downnu<upnu)
	{
		long square=0;
		for(int i=downnu;i<=upnu;i++)
		{
			square+=i*i;
		}
		printf("From %ld to %ld,the number's sums of square is %ld\n",downnu,upnu,square);
		printf("Please intput down and up number:");
		scanf("%ld%ld",&downnu,&upnu);
	}
	printf("Done!");
	return 0;
	
}
