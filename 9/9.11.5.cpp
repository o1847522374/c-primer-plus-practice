#include<stdio.h>
void large_of(double *p,double *q)
{
	if(*p>*q)
		*q=*p;
	else
		*p=*q;
}
int main(void)
{
	double x,y;
	scanf("%lf%lf",&x,&y);
	printf("x=%lf\ty=%lf\n",x,y);
	large_of(&x,&y);
	printf("x=%lf\ty=%lf\n",x,y);
	return 0;
}
