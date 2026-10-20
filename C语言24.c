#include<stdio.h>
int isPerfect(int x);
int isPrime(int x);
int isPalindrome(int x);
int main()
{
	int m,n,i;
	int count=0;
	printf("请输入区间的两端：");
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++){
		if(isPrime(i)==1 && isPalindrome(i)==1 && 
		isPerfect(i)==1){
			printf("%d是特殊素数\n",i);
			count++;}
	}
	printf("一共有%d个特殊素数",count);
	return 0;
 } 
int isPerfect(int x)//判断因数和是否为素数 
{
	int i;
	int s=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			s+=i;
		}
	}
	if(isPrime(s)==1){
		return 1;
	}
	else{
		return 0;}
}
int isPrime(int x)//素数判断函数 
{
	int i;
	for(i=2;i*i<=x;i++){
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
