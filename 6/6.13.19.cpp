#include<stdio.h>
int main(void)
{
	int nu=10,i=0;
	putchar('\t');
	for(;nu>=10&&nu<=99;nu++)
	{
		if(nu%2==0&&nu%10!=nu/10)
		{
			i++;printf("%-d\t",nu);
		}
	}
	printf("\n");
	printf("Total have %d numbers.\n",i);
	return 0;
} 
