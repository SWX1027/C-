#include<stdio.h> 
int main()
{
	int answer=42;
	int x;
	int count=0;
	do{
		printf("开始猜数：");
		scanf("%d",&x);
		count++; 
		if(x>answer){
			printf("你猜大了");
		}
		if(x<answer){
			printf("你猜小了"); 
		}
	}while(x!=answer);
	if(x==answer){
		printf("你猜对了,一共花了%d次",count);
	}
	return 0;
	
}
