#include<stdio.h>
int main(void)
{
	int x[8];
	printf("Please input eight numbers:");
	for(int i=0;i<8;i++)
		scanf("%d",&x[i]);
	for(int i=7;i>=0;i--)
		printf("%-8d",x[i]);
	return 0;
} 
