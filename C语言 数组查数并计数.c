#include<stdio.h>
int main()
{
	int a[8];
	int i;
	printf("请输入八个数：");
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
	}
	int count=0;
	int x;
	printf("请输入需要查找的数：");
	scanf("%d",&x);
	for(i=0;i<8;i++){
		if(a[i]==x){
			count++;
		}
	} 
	printf("一共出现了%d次",count);
	return 0;
}
