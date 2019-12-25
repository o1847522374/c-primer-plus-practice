#include<stdio.h>
int main(void)
{
	float inches,cm;
	int feet;
	printf("Enter a height in centmeters(<=0 to quit):");
	scanf("%f",&cm);
	while(cm>0)
	{
		inches=cm/2.54;feet=(int)inches/12;inches=inches-feet*12;
		printf("%.1fcm = %d feet, %.1f inches\n"
		"Enter a height in centmeters(<=0 to quit):",cm,feet,inches);
		scanf("%f",&cm);
	}
	printf("bye");
	return 0;
 } 
