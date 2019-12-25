#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int word=0,ch,al=0;
	while((ch=getchar()))
		if(isalpha(ch))
		{
			al++;break;
		}
		else
			continue;
	while((ch=getchar())!=EOF)
	{
		if(isalpha(ch))
		{
			al++;
		}
		else
		{
			word++;
			if(isalpha(ch))
			{
				break;al++;
			}
			else
				continue;
		}
	}
	double ave=(double)al/(double)word;
	printf("alpha:%d\n word:%d\naverage:%.2lf",al,word,ave);
	return 0;
	
}
