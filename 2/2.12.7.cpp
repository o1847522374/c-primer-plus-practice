#include<stdio.h>
void s(void)
{
	printf("Smile!");
}
int main(void)
{
	s();s();
	printf("Smile!\n");
	s();
	printf("Smile!\n");
	s();
	getchar();
	return 0;
}
