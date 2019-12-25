#include<stdio.h>
void TAX(long TOP);

#define TOP1 17850
#define TOP2 23900
#define TOP3 29750
#define TOP4 14857
#define TAX1 0.15
#define TAX2 0.28
int main(void)
{
	long gross,op;
	printf("Which kind of situation you are?\n"
			"1)simple\t\t\t2)househoder\n3)married,together\t\t4)married,left\n5)quit\n");
	while((scanf("%d",&op))!=EOF)
	{
		
			
		switch(op)
		{
			
			
			case 1:TAX(TOP1);break;
			case 2:TAX(TOP2);break;
			case 3:TAX(TOP3);break;
			case 4:TAX(TOP4);break;
			case 5:return 0;
			default:printf("Hmmmmm..try again?");continue;
		}
		printf("Which kind of situation you are?\n"
			"1)simple\t\t\t2)househoder\n3)married,together\t\t4)married,left\n5)quit\n");
		
	 }
	printf("Bye!\n");
	return 0;
}
void TAX(long TOP)
{
	long taxes,gross;
	printf("input gross(ctrl+z to back):"); 
	while((scanf("%ld",&gross))!=EOF)
	{
		
		
		if(gross<TOP)
			taxes=gross*TAX1;
		else
			taxes=TOP*TAX1+(gross-TOP)*TAX2;
		printf("Your taxes is %-8ld\n",taxes);
		printf("input gross(ctrl+z to back):");
	}
}
