#include<stdio.h>
int main(void)
{
	float rate,size;
	int s,m,h;
	printf("�����������ļ���С(MB)�������ٶ�(MB/s)��");
	scanf("%f%f",&size,&rate);
	s=size/rate;
	h=s/3600;
	m=(s-h*3600)/60;
	s=s-h*3600-m*60;
	printf("��%.3fMB/s���ٶ����ش�СΪ%.2fMB���ļ�����Լ��ʱ%dʱ%d��%d��",
	       rate,size,(int)h,(int)m,(int)s);
    return 0; 
 } 
