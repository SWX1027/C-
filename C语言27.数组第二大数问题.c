#include<stdio.h>
int main()
{
	int i;
	int a[10];
	printf("请输入十个数：");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int max1=a[0];
	int max2;
	for(i=1;i<=9;i++){
		if(a[i]!=max1){
			max2=a[i];
			break;
		}
	}
	for(i=1;i<=9;i++){
		if(a[i]>max1){
			max2=max1;
			max1=a[i];
		}
	else if(a[i]<max1){
			if(a[i]>max2){
			max2=a[i];
			}
		}
	}
	printf("最大的数是：%d，第二大的数是：%d",max1,max2);
	return 0; 
}
