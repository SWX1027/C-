#include<stdio.h>
int main()
{
	int a[10];
	printf("ÇëÊäÈëÊı×é£º");
	int i;
	int m,n;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	} 
	for(i=0;i<5;i++){
		m=a[i];
		n=a[9-i];
		a[i]=n;
		a[9-i]=m;
	}
	for(i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
