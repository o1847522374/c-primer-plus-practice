#include<stdio.h>
double harmean(double a,double b);

int main(void)
{
	double a,b;
	scanf("%lf%lf",&a,&b);
	harmean(a,b);
	printf("%lf %lf--harmonic mean=%lf\n",a,b,harmean(a,b));
	return 0;	
}
double harmean(double a,double b)
{
	return 1/((1/a+1/b)/2);
}
