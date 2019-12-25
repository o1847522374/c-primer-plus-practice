#include<stdio.h>
int main(void)
{
	float a;
	printf("请输入一个小数：");
	scanf("%f",&a);
	printf("a.The input is %f or %e\n",a,a);
	printf("b,The input is %+f or %E\n",a,a);
	return 0;
}
