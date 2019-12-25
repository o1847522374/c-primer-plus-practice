#include<stdio.h>
int main(void)
{
	long x,y;
	printf("This programe comoues moduli.\n"
			"Enter the second number:______\b\b\b\b\b\b");
	scanf("%ld",&x);
	printf("Enter the first number:______\b\b\b\b\b\b");
	scanf("%ld",&y);
	while(y>0)
	{
		
		printf("%ld %% %ld = %ld\n"
				"Enter the next number(<=0 to quit):______\b\b\b\b\b\b",y,x,y%x);
		scanf("%ld",&y);
	}
	printf("Done!");
	return 0;
}
