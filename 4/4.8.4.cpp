#include<stdio.h>
int main(void)
{
	char name[40];
	float inches;
	printf("请输入您的姓名：");
	scanf("%s",name);
	printf("请输入您的身高（米）：");
	scanf("%f",&inches);
	printf("您好，%s,您的身高是%.2f米。",name,inches);
	return 0; 
 } 
