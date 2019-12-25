#include<stdio.h>
#define ART    2.05
#define BEE    1.15
#define CAR    1.09
#define DIS    0.05
#define DISPAY 100
#define TRAN1  6.5
#define TRAN2  14
#define TRAN3  0.5
#define POU1   5 
#define POU2   20
void Menu(void);
void PrintMark(char ch,int n);
double TranPay(double weight);
void account(double *weight,double *pay,double price);


int main(void)
{
	double weight=0,a_weight=0,b_weight=0,c_weight=0;
	double payall=0,a_pay=0,b_pay=0,c_pay=0;
	double tran_pay;
	char op;
	PrintMark('*',40);
	Menu();
	while((op=getchar())!='q')
	{
		switch(op)
		{
			case 'a':account(&a_weight,&a_pay,ART);break;
			case 'b':account(&b_weight,&b_pay,BEE);break;
			case 'c':account(&c_weight,&c_pay,CAR);break;
			default :printf("Please input a b c or q\n");
		}
		printf("Anything else?\n");
		Menu();
	}
	weight=a_weight+b_weight+c_weight;
	payall=a_pay+b_pay+c_pay;
	if(payall>DISPAY)
		payall*=DIS;
	PrintMark('*',40);
	printf("Invoice is follow:\n");
	printf("Things		weight	pay	\n");
	printf("Artichoke	%.2lf	%.2lf\n",a_weight,a_pay);
	printf("Beet		%.2lf	%.2lf\n",b_weight,b_pay);
	printf("Carrot		%.2lf	%.2lf\n",c_weight,c_pay);
	PrintMark('-',40);
	printf("Transport pay:%.2lf\n",TranPay(weight));
	printf("Total pay:	%.2lf\n",payall+TranPay(weight));
	PrintMark('*',40);
	return 0;
		
 } 
void Menu(void)
 {
 	printf("What do you want to buy?\n");
 	printf("a)artichoke	$2.05/pound\n");
 	printf("b)beet		$1.15/pound\n");
 	printf("c)carrot	$1.09/pound\n");
 	printf("q)done and quit\n");
 }
void PrintMark(char ch,int n)
{
	for(int i=0;i<n;i++)
	putchar(ch);
	putchar('\n');
}
double TranPay(double weight)
{
	if(weight<=POU1)				return TRAN1;
	if(weight>POU1&&weight<=POU2)	return TRAN2;
	if(weight>POU2)					return TRAN2+(weight-POU2)*TRAN3;
}
void account(double *weight,double *pay,double price)
{
	double wei;
	printf("How many pounds do you want?\n");
	scanf("%lf",&wei);
	*pay+=wei*price;
	*weight+=wei;
}
