#include<stdio.h>
int main(){
	int n;
	int i;
	double sum=0.0;
	int sign =1;
	printf("请输入一个数：",n); 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=sign*1.0/i;
		sign=-sign;
	}
	printf("f(%d)=%f\n",n,sum);
	return 0;
}
