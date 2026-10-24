#include<stdio.h>
int main()
{
	int n,x,i;
	printf("请输入数组的个数以及要找的数：");
	scanf("%d%d",&n,&x);
	int a[100];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int xi=-1;
	for(i=0;i<n;i++){
		if(a[i]==x){
			xi=i;
		}
	}
	printf("在第%d位");
	return 0;
	
}

