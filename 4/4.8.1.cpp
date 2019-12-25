#include<stdio.h>
int main(void)
{
	char xing[40],ming[40];
	printf("请依次输入您的姓名(姓名之间要有空格奥！亲！)：");
	scanf("%s%s",xing,ming);
	printf("您好，亲爱的%s%s",xing,ming);
	return 0;
 } 
