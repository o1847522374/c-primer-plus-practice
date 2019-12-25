#include<stdio.h>

int main(void)
{
	int max=10000,min=0;
	char ch;
	printf("Think a number between 0~10000:\n");
	printf("Is it %d ?\n",(max+min)/2);
	printf("big:b/B\t\tsmall:s/S\tyes:Y/y\n");
	while((ch=getchar())!='y'&&ch!='Y')
	{
		if(ch=='b'||ch=='B')
			max=(max+min)/2;
		else if(ch=='s'||ch=='S')
			min=(max+min)/2;
		else
			continue;
		printf("Is it %d ?\n",(max+min)/2);
	}
	printf("I knew it,hahahahahha.......\n");
	return 0;
}
