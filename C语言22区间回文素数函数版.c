#include<stdio.h>
int isPalindrome(int x);
int isprime(int x);
int main()
{
	int x,m,n,i;
	int count=0;
	printf("请输入区间的两端：");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		if(isprime(i)==1 && isPalindrome(i)==1){
			count++;
			printf("%d是回文素数\n",i);
		}
	}
	printf("一共有%d个回文素数",count);
return 0;
}
int isprime(int x)//素数判断函数 
{
	int i;
	for(i=2;i<x;i++){
		if(x%i==0){
			return 0;}
		}
	return 1;
}
int isPalindrome(int x)//回文数判断函数 
{
	int y=x; 
	int t=0;
	do{
		t=t*10+x%10;
		x/=10;
	}while(x!=0);
	if(y==t){
		return 1;
	}
	else{
		return 0;
	}
}
