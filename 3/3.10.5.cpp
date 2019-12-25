#include<stdio.h>
int main(void)
{
	float g,h;
	float tax,rate;
	rate = 0.08;
	g    = 1.0e5;
	tax  = rate * g;
	h    = g + tax;
	printf("You owe $%f in taxs for a total of  $%f . \n",g,tax,h);
	return 0;
	getchar();
 
 } 
