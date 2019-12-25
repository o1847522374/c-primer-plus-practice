#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Please input a number:");
	scanf("%d",&a);
	b=a;
	while(a<=b+10)
	{
		printf("%d\t",a);
		a++;
	}
	printf("end!");
	return 0;
 } 
