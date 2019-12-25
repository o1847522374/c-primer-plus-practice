#include<stdio.h>
int main(void)
{
	int m;
	do{
		printf("Please input minus number:");
		scanf("%d",&m);
		
		
		
		printf("%dminus=%dhours%dminus\n",m,m/60,m%60);
		
	}while(m>0);
	printf("end!");
	return 0;
 } 
