#include<stdio.h>
#include<math.h>
double power(double a,double n);
int main(void)
{
	double a,n;
	scanf("%lf%lf",&a,&n);
	printf("%.2lf^%.2lf=%lf\n",a,n,power(a,n));
	return 0;
}
double power(double a,double n)
{
	double pro=1;
	if(a==0)
	{
		if(n==0)	return 1;
		else	return 0;
	}
	else
	{
		if(n==0) return 1;
		else if(n>0)
		{
			
			for(int i=0;i<n;i++)
			{
				pro*=a;
			}
			return pro;
		}
		else if(n<0)
		{
			
			for(int i=0;i<abs(n);i++)
			{
				pro*=a;
			}
			return 1/pro;
		}
	}
}
