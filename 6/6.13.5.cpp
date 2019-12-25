#include<stdio.h>

int main(void)
{
	char letter;
	int k=4,l=1,m=1,a=4,b=4;
	printf("Please input a letter:");
	scanf("%c",&letter);
	for(int i=1;i<=5;i++,l++,m++,k--)
	{
		for(int j=1;j<=k;j++) printf(" ");
		for(int j=1;j<=l;j++,b--) printf("%c",letter-b);
		b=4;
		for(int j=1;j<m;j++ ,a--) printf("%c",letter-a);
		a=4;
		printf("\n");
	}
	return 0;
}
