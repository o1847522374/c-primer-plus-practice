#include<stdio.h>
int main(void)
{
	float kuatuo;
	printf("请问你一天饮用多少夸脱水？\n");
	scanf("%f",&kuatuo);
	printf("如果你一天饮用%f夸脱水，那你一天摄入%e个水分子。\n",kuatuo,kuatuo*950/3.0e-23);
	getchar();
	getchar(); 
	return 0;
 } 
