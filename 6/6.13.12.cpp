#include<stdio.h>
#include<math.h>
int main(void)
{
	double times,sum1=0,sum2=0;
	printf("Please input the number of times:");
	while((scanf("%lf",&times))==1)
	{
		sum1=sum2=0;
		for(int i=1.0;i<=times;i++)
			sum1+=1.0/i;
		for(int i=1.0;i<=times;i++)
			sum2+=1.0/(pow(-1,i-1)*i);
		printf("%10lf  %10lf\n"
				"Please input the number of times:",sum1,sum2);
	}
	printf("Done!");
	return 0; 
}

