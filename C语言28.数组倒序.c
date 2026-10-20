#include<stdio.h>
int main()
{
	int a[6];
	int i,t;
	printf("ÇëÊäÈëÁù¸öÊı");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<=2;i++){
		t=a[i];
		a[i]=a[5-i]; 
	}
	for(i=0;i<6;i++){
		printf("%d ",a[i]);
	}
	return 0;
 } 
