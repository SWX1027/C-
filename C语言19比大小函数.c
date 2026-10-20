#include<stdio.h>
int max(int a,int b){
	if(a>b){
		return a;
	}
	if(b>a){
		return b;
	}
	else{
		return a;
	}
}
int main()
{
	int a,b; 
	printf("请输入两个数");
	scanf("%d%d",&a,&b);
	int t=max(a,b);
	printf("较大的数是%d",t);
	return 0;
}
