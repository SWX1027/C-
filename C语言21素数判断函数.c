#include<stdio.h>
int isprime(int x)
{
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			return 0;}
		}
	return 1;
}
int main()
{
	int x;
	printf("请输入一个数：");
	scanf("%d",&x);
	int result=isprime(x);
	if(result==1){
		printf("%d是素数",x);
	}
	else{
		printf("%d不是素数",x);
	}
	return 0;
 } 
