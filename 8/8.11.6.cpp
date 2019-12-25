#include<stdio.h>
char get_first(void);
int main(void)
{
	char z;
	z=get_first();
	putchar(z);
	return 0;
}
char get_first(void)
{
	char f,ch;
	while((ch=getchar())==' ')
		continue;
	f=ch;
	while((ch=getchar())!='\n')
		continue;
	return f;
}
