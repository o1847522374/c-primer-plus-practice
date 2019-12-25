#include<stdio.h>
int main(void)
{
	int y,d;
	printf("How old are you?\n");
	scanf("%d",&y);
	d=y*365;
	printf("So,you have lived for %d years\n",y);
	printf("                   or %d days\n",d);
	getchar();
	getchar();
	return 0;
}
