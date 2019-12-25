#include<stdio.h>
int main(void)
{
	char xing[40],ming[40];
	printf("Please int your name:");
	scanf("%s%s",xing,ming);
	printf("%10s %10s\n",xing,ming);
	printf("%10zd %10zd\n",sizeof xing,sizeof ming);
	printf("%-10s %-10s\n",xing,ming);
	printf("%-10zd %-10zd\n",sizeof xing,sizeof ming);
	return 0;
 } 
