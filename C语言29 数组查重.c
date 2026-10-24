#include<stdio.h>
int main()
{
	int a[8];
	int i,j;
	printf("请输入八个数：");
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	int k=0;
	for(i=0;i<8;i++){
		int flag=0;//作为指示变量 判断是否重复 
	    for(j=0;j<i;j++){
			if(a[j]==a[i]){
				flag=1;
				break;//重复 不计 
			}
		}
		if(flag==0){
			a[k]=a[i];
			k++;//重新排序 赋值 
		}//一个for的大循环 镶嵌小循环 每次判断一个数 
}
	for(i=0;i<k;i++){
		printf("%d ",a[i]);
	}
	return 0;
 } 
