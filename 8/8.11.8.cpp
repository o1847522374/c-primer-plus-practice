#include<stdio.h>
float a,b;

void menu(void);
void add(void);
void sub(void);
void mul(void);
void div(void);
void p1(void);
void p2(void);
void check(float *p);

int main(void)
{
	char op;
	menu();
	while((op=getchar()))
	{
		while(getchar()!='\n')	continue;
		switch(op)
		{
			case 'a':p1();check(&a);p2();check(&b);add();break;
			case 's':p1();check(&a);p2();check(&b);sub();break;
			case 'm':p1();check(&a);p2();check(&b);mul();break;
			case 'd':p1();check(&a);p2();check(&b);div();break;
			case 'q':printf("Bye.\n");return 0;
			default:printf("Please choice the right option!\n");continue;
		}
		menu();
	}
}
void menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add\t\ts. subtract\nm. multiply\td. divide\nq. quit\n");
}
void check(float *p)
{
	int ch;
	while(scanf("%f",p)!=1)
	{
		while((ch=getchar())!='\n')
		{
			putchar(ch);
		}
		putchar(' ');
		
		printf("is not an number\n");
		printf("Please enter a number,such as 2.5,-1.78E8, or 3:");
	}
	getchar();
}
void p1(void)
{
	printf("Please input the first number:");
}
void p2(void)
{
	printf("PLease input the secind number:");
}
void add(void)
{
	printf("%g+%g=%g\n",a,b,a+b);
}
void sub(void)
{
	printf("%g-%g=%g\n",a,b,a-b);
}
void mul(void)
{
	printf("%g*%g=%g\n",a,b,a*b);
}
void div(void)
{
	while(b==0)
	{
		printf("Enter a number other than 0:");
		scanf("%f",&b);
	}
	printf("%g/%g=%g\n",a,b,a/b);
}
