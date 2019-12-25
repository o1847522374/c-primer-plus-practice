#include<stdio.h>
#define M 26
int main(void)
{
	int a[M],l='a';
	for(int i=0;l<='z';i++,l++)
		printf("a[%d]=%c\t",i,l);
	return 0;
	 
}
