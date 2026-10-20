#include<stdio.h>
int main()
{
	int m,n,x,i,t;
	int count=0;
	printf("请输入区间的两端：");
	scanf("%d%d",&m,&n);
	int isprime1;
	int isprime2;
	for(x=m;x<=n-2;x++){
		isprime1=1;
		isprime2=1;
		t=x+2;
		for(i=2;i<x;i++){
			if(x%i==0 ){
				isprime1=0;
				break; }
			}
		for(i=2;i<t;i++){
			if(t%i==0 ){
				isprime2=0;
				break; }
			}
		if(isprime1==1 && isprime2==1){
				printf("(%d,%d)\n",x,t);
				count++;
			}
		}
	printf("一共有%d对孪生素数",count);
	return 0;
}
