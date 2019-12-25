#include<stdio.h>
#include<float.h>



int main(void)
{
	float f=1.0/3.0;
	double d=1.0/3.0;
	printf(
	       "%-20.6f%-20.12f%-20.16f\n"
	       "%-20.6f%-20.12f%-20.16f\n",
		   f,f,f,d,d,d);
    printf("%d  %d",FLT_DIG,DBL_DIG);
    return 0;
 } 
