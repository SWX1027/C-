#include<stdio.h>
int main()
{
	int x;
	int t=0;
	printf("请输入一个数：");
	scanf("%d",&x);
	int y=x;
	do{
		t=t*10+x%10;
		x/=10;
		}while(x>0);
	if(t==y){
		printf("x是回文数");
	}
	else{
		printf("x不是回文数");
	}
		return 0;
	} 
