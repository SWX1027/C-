#include<stdio.h>
int main ()
{
	int n,i;
	printf("请输入数的个数：");
	scanf("%d",&n);
	printf("请输入数组：");
	int a[100];
	int b[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;//记录每个数出现的次数 
	}
	int j;
	for(i=0;i<n;i++){
		for(j>i;j<n;j++){
			if(a[j]==a[i]){
				b[i]++;
			}
		}
	}
	int count=0;
	for(i=0;i<n;i++){
		if(b[i]==1){
			count++;
		}
	}
	printf("%d",count);
	return 0;
	 
}
