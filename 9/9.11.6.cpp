#include<stdio.h>
void maxchange(double *p,double *q);
void uptolow(double *a,double *b,double *c);
int main(void)
{
	double x,y,z;
	scanf("%lf%lf%lf",&x,&y,&z);
	printf("x=%lf\ty=%lf\tz=%lf\n",x,y,z);
	uptolow(&x,&y,&z);
	printf("x=%lf\ty=%lf\tz=%lf\n",x,y,z);
	return 0;
}
void maxchange(double *p,double *q)
{
	if(*p>*q)
	{
		*p=*q+*p;
		*q=*p-*q;
		*p=*p-*q;
	}
}
void uptolow(double *a,double *b,double *c)
{
	maxchange(a,b);
	maxchange(a,c);
	maxchange(b,c);
}
