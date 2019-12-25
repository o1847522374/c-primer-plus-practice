#include<stdio.h>
int main(void)
{
	int nu,odd_ct=0,even_ct=0;
	double odd_sum=0,even_sum=0;

	while((scanf("%d",&nu))==1&&nu!=0)
	{
		if(nu%2==0)
		{
			even_ct++;
			even_sum+=nu;
		}
		if(nu%2!=0)
		{
			odd_ct++;
			odd_sum+=nu;
		}
		
	}
	printf("count even:%d,average even:%lfd\n"
		   "count  odd:%d,average  odd:%lf",even_ct,even_sum/even_ct,odd_ct,odd_sum/odd_ct);
	return 0;
 } 
