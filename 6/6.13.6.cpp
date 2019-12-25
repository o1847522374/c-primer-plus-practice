#include<stdio.h>
int main(void)
{
	long i,j;
	printf("please input the littlest number:___\b\b\b");
	scanf("%ld",&i);
	printf("             the biggest  number:___\b\b\b");
	scanf("%ld",&j);
	for(;i<=j;i++)
		printf("%8ld%8ld%8ld\n",i,i*i,i*i*i);
	return 0;
}
