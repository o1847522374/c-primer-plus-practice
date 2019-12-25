#include<stdio.h>
float temperatures(float f);
int main(void)
{
	float f;
	printf("Input ¨H number:__\b\b");
	while(scanf("%f",&f)==1)
	{
		temperatures(f);
		printf("Input ¨H number:__\b\b");
	}
	return 0;
 } 
float temperatures(float f)
{
	float c,k;
	c=5.0/9.0*(f-32.0);
	k=c+273.16;
	printf("%f¨H=%.2f¡æ=%.2fK\n",f,c,k);
}
