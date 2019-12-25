#include<stdio.h>
int main(void)
{
	char xing[40],ming[40];
	printf("请依次输入您的姓名(姓名之间要有空格奥！亲！)：\n");
	scanf("%s%s",xing,ming);
	printf("1\"%s,%s\"\n",xing,ming);
	printf("2\"%20s%20s\"\n",xing,ming);
	printf("3\"%-20s%-20s\"\n",xing,ming);
	printf("4   %s%s\n",xing,ming);
	return 0;
 } 
