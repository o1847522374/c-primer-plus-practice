#include<stdio.h>
int main(void)
{
	float m;
	printf("1英寸=2.54厘米，\n请输入你的英寸值：");
	scanf("%f",&m);
	printf("%f英寸=%f厘米",m,m*2.54);
	getchar();
	return 0;
 } 
