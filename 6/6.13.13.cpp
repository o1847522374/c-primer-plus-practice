#include<stdio.h>
#include<math.h>
int main(void)
{
	long a[8],b=0;
	for(int i=0;i<8;i++)
		a[i]=pow(2,i);
	do
	{
		printf("%-8ld",a[b]);
		b++;
	}while(b<8);
	return 0;
		
	
}
