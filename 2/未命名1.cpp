#include<stdio.h>
#include<math.h>
int main()
{
	float inch,cm;
	printf("please input inch number:");
	scanf("%f", &inch);
	cm=2.54*inch;
	printf("%finch=%fcm \n",inch,cm);
	getchar();
	getchar();
	return 0;
 } 
