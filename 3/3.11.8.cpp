#include<stdio.h>
int main(void)
{
	float f;
	printf("Enter a floating-point value:");
	scanf("%f",&f);
	printf("fixed-point notation:%f\n",f);
	printf("exponential notation:%e\n          p notation:%p",f,f);
	getchar();
	return 0;
}
