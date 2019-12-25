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
	int flag;
	printf("Enter the number corresponding to the desire pay rate or action:\n");
	printf("1)$8.75/hr\t\t2)$9.33/hr\n3)$10.00/hr\t\t4)$11.20/hr\n5)quit\n");
	while(scanf("%d",&flag)==1)
	{
		switch(flag)
		{
			case 1:BASEPAY=8.75;break;
			case 2:BASEPAY=9.33;break;
			case 3:BASEPAY=10.00;break;
			case 4:BASEPAY=11.20;break;
			case 5:return 0;
			default:printf("Please input the right number!");goto part;
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
		printf("gross:%.2lf\nnet:%.2lf\ntaxes:%.2lf\n",gross,net,taxes);
		part: printf("Enter the number corresponding to the desire pay rate or action:\n"
				"1)$8.75/hr\t\t2)$9.33/hr\n3)$10.00/hr\t\t4)$11.20/hr\n5)quit\n");
	}
	
	
	return 0;
 } 
