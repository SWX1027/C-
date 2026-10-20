#include<stdio.h>
int main()
{
	int a[10];
	int i;
	printf("请输入十个数：");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int max=a[0];
	for(i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("最大数为%d",max);
	return 0; 
}
