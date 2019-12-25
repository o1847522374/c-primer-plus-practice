#include<stdio.h>
int main(void)
{
	int space,enter,other;
	char ch;
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
			case  ' ':space++;break;
			case '\n':enter++;break;
			default:other++;
		}
	}
	printf("space=%d\nenter=%d\nother=%d\n",space,enter,other);
	return 0;
	
 } 
