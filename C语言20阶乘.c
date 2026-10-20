#include<stdio.h>
int  factorial(int n)
{
	int i;
	int s=1;
	for(i=1;i<=n;i++){
		s*=i;
	}
	return s;
}
int main ()
{
	int n;
	printf("请输入一个数：");
	scanf("%d",&n);
	int s=factorial(n);
	printf("这个数的阶乘是：%d",s) ;
	return 0;
}
