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
	int maxi=0;
	for(i=1;i<10;i++){
		if(a[i]>max){
			max=a[i];
			maxi=i;
		}
	}
	printf("最大值是%d,下标为%d",max,maxi);
	return 0;
}
