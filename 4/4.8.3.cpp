#include<stdio.h>
int main(void)
{
	float a;
	printf("������һ��С����");
	scanf("%f",&a);
	printf("a.The input is %f or %e\n",a,a);
	printf("b,The input is %+f or %E\n",a,a);
	return 0;
}
