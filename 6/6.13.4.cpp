#include<stdio.h>
int main(void)
{
	int i,j,l='A';
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)   printf("%c",l++);
		printf("\n");
	}
	return 0;
}
