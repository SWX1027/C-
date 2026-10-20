#include<stdio.h>
int main()
{
	int m,n,x,i,s;
	int count=0;
	printf("请输入区间的两端") ;
	scanf("%d%d",&m,&n) ;
	for(x=m;x<=n;x++){
		s=0;
		for(i=1;i<x;i++){ 
			if(x%i==0){
			s+=i;
			}
		}
	if(x==s){
		printf("%d ",x);
		count++;
	}	
	}
	printf("一共有%d个完美数",count);
	return 0;
 } 
