#include<stdio.h>
void br(void)
{
	printf("Brazil,Russia");
}
void ic(void)
{
	printf("India,China\n");
}
int main(void)
{
	printf("Brazil,Russia,");
	ic();
	printf("India,China,\n");
	br();
	getchar();
	return 0; 
} 
