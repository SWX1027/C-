#include<stdio.h> 
int main()
{
	int num;
	int reserve=0;
	printf("请输入一个数；");
	scanf("%d",&num); 
	while(num!=0){
		int digit=num%10;
		reserve=reserve*10+digit;
		num=num/10;
	}
	printf("此数字倒置后为：%d",reserve);
	return 0;
}
