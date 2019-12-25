#include<stdio.h>
int main(void)
{
	double a,b;
	printf("Please input two number:");
	while((scanf("%lf%lf",&a,&b))==2)
	{
		double c=(a-b)/a*b;
		printf("(%lf-%lf)/(%lf*%lf)=%lf\n"
		       "Please input two number(q to quit):",a,b,a,b,c);
	}
	printf("Done!");
	return 0;
}
