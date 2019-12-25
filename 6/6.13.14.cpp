#include<stdio.h>
#define N 8



int main(void)
{
	double a[N],b[N];
	int i=0;
	printf("Please input the first number for the first group:");
	while(i<N)
	{
		scanf("%ld",&a[i]);
		i++;
		if(i<N)
			printf("                           the next number please:");
	}
	
	
	
//	for(int i=0;i<N;i++)
//	{
//		for(int j=0;j<=i;j++)
//		{
//			b[i]+=a[j];
//		}
//	}



	b[0]=a[0];
	for(int j=1;j<N;j++)
	{
		b[j]=b[j-1]+a[j];
	}
	
	for(int i=0;i<N;i++)
		printf("%8ld",a[i]);
	printf("\n");
	for(int i=0;i<N;i++)
		printf("%8ld",b[i]);
	return 0;
}


