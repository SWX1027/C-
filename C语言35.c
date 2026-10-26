#include<stdio.h>
int isprime(int n){
	int i;
	int result=1;
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			result=0;
			break;
		}
	}
	return result;
}
int main()
{
	int count=0;
	int i;
	for(i=2;i<=100;i++){
		if(isprime(i)==1){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
