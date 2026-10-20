#include<stdio.h>
int main()
{
	int x;
	printf("请输入一个数：");
	scanf("%d",&x);
	int d=0;
	int s=0;
	do{
		d=x%10;
		x=x/10;
		s+=d;
	} while(x>=10); 
	s=s+x;
	printf("这个数各位数之和为：%d",s);
	return 0;
}
