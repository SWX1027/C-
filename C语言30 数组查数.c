#include<stdio.h>
int main()
{
	int a[8];
	int i;
	printf("请输入八个数：");
	for(i=0;i<8;i++){
		scanf("%d",&a[i]);
		}
	int x;
	printf("请输入你要查找的数："); 
	scanf("%d",&x);
	int pos=-1;
	for(i=0;i<8;i++){
		if(a[i]==x){
		pos=i;
		break; 
	    }
    }if(pos==-1){
    	printf("不存在");
	}
	else if(pos!=-1){
		printf("在%d个数第一次出现",pos+1);
	}
	return 0;
} 
