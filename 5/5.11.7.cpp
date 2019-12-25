#include<stdio.h>
double cube(double a);

int main(void)
{
	double x;
	printf("input number:");
	while((scanf("%lf",&x))==1)
	{
		x=cube(x);
		printf("The number's cube is %.2lf\n""input number:",x);
		
	}
	return 0;
}

double cube(double a)
{
	return a*a*a;
}
