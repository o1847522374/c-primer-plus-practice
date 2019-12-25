#include<stdio.h>
int main(void)
{
	int i=0;
	char input[256];
	printf("Please input the string:\n");
	while((input[i]=getchar())!='\n')
		i++;
	for(int j=i;j>=0;j--)
		printf("%c",input[j]);
	printf("\n");
	return 0;
}
