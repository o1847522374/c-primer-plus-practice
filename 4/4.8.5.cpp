#include<stdio.h>
int main(void)
{
	float rate,size;
	int s,m,h;
	printf("请依次输入文件大小(MB)和下载速度(MB/s)：");
	scanf("%f%f",&size,&rate);
	s=size/rate;
	h=s/3600;
	m=(s-h*3600)/60;
	s=s-h*3600-m*60;
	printf("以%.3fMB/s的速度下载大小为%.2fMB的文件，大约用时%d时%d分%d秒",
	       rate,size,(int)h,(int)m,(int)s);
    return 0; 
 } 
