#include<stdio.h>
int main()
{
	int m,n;//区间左右端 
	int x;
	int i;
	int s=0;//用于求和 
	int count=0;//计数
	int isprime=1;//判断素数 
	printf("请依次输入区间的两端："); 
	scanf("%d%d",&m,&n);
	for(x=m;x<=n;x++){
		isprime=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				isprime=0;
				break;}
		}
		if(x>=2 && isprime==1){
		printf("%d ",x);//输出素数 
		count++;//计数加一 
		s+=x;//求和 
	}
	}
	printf("一共有%d个素数",count);
	printf("这些素数的和为：%d",s);
	return 0;
	
}
