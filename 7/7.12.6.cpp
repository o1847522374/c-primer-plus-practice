#include<stdio.h>
int main(void)
{
	char chl='#',chr;
	int count=0;
	while((chr=getchar())!='#')
	{
		
		if(chl=='e')
			if(chr=='i')
				count++;
		chl=chr;
	}
	printf("\'ei\'show times:%d",count);
	return 0;
}
