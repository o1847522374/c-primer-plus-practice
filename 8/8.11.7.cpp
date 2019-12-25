#include<stdio.h>
//#define BASEPAY 10
#define BASEHOURS 40
#define OVERTIMES 1.5
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25 
#define TOP1 300
#define TOP2 150
int main(void)
{
	double hours,gross,net,taxes,BASEPAY;
	char flag;
	printf("Enter the number corresponding to the desire pay rate or action:\n");
	printf("a) $8.75/hr\t\tb) $9.33/hr\nc) $10.00/hr\t\td) $11.20/hr\nq) quit\n");
	while((flag=getchar())!=EOF)
	{
		while((getchar())!='\n')	continue;
		switch(flag)
		{
			case 'a':BASEPAY=8.75;break;
			case 'b':BASEPAY=9.33;break;
			case 'c':BASEPAY=10.00;break;
			case 'd':BASEPAY=11.20;break;
			case 'q':return 0;
			default:printf("Please input the right option!");continue;
		}
		printf("Please input the number of working time every week:");
		scanf("%lf",&hours);
		if(hours<BASEHOURS)
			gross=hours*BASEPAY;
		else
			gross=BASEHOURS*BASEPAY+(hours-BASEHOURS)*BASEPAY*OVERTIMES;
		if(gross<=TOP1)
			taxes=gross*TAX1;
		else if(gross<=TOP2)
			taxes=TOP1*TAX1+(gross-TOP1)*TAX2;
		else
			taxes=TOP1*TAX1+TOP2*TAX2+(gross-TOP1-TOP2)*TAX3;
		net=gross-taxes;
		printf("**************************************\n");
		printf("gross:%.2lf\nnet:%.2lf\ntaxes:%.2lf\n",gross,net,taxes);
		printf("**************************************\n\n");
		printf("Enter the number corresponding to the desire pay rate or action:\n"
				"a) $8.75/hr\t\tb) $9.33/hr\nc) $10.00/hr\t\td) $11.20/hr\nq) quit\n");
		while((getchar())!='\n')	continue;
	}
	
	
	return 0;
 } 
