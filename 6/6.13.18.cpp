#include<stdio.h>
int main(void)
{
	int nu_friend=5,nu_week=1;
	for(;nu_friend<=150;nu_week++)
	{
		nu_friend-=nu_week;
		nu_friend*=2;
	}
	printf("After %d weeks,Dr.Rabnud's would have %d firends",nu_week,nu_friend);
	return 0;
}
