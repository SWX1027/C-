#include<stdio.h>
int main()
{
	int m,n,x,r,i;
	int t;
	int count=0;
	int isprime;
	printf("请输入区间的两端：");
	scanf("%d%d",&m,&n);
	for(x=m;x<=n;x++){
		isprime=1; 
		r=x;
		t=0; 
	do{
		t=t*10+r%10;
		r=r/10;
	}while(r!=0);
	if(t==x){
		for(i=2;i<x;i++){
		if(x%i==0){
			isprime=0;
			break;}
		}
		if(x>=2 && isprime==1){
			printf("%d ",x);
			count++;
		}
	}
}
	printf("\n一共有%d个回文素数\n",count);
	return 0;
	 
}
