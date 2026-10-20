#include<stdio.h>
int isPerfect(int x)
{
	int i;
	int s=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			s+=i;
		}
	}
	if(s==x){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int m,n,t;
	int count=0;
	printf("请输入区间的两端：");
	scanf("%d%d",&m,&n);
	for(t=m;t<=n;t++){
		if(isPerfect(t)==1){
			printf("%d是完美数\n",t);
			count++;
		}
	}
	printf("一共有%d个完美数",count);
return 0;	 
}
