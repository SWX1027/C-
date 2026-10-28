#include<stdio.h>
int main()
{
	int n,i;
	int a[1005];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int sum=a[1];
	int max=a[1];
	int start=1;
	int end=1;
	for(i=2;i<=n;i++){
		if(sum<0){
			sum=a[i];
			start=i;
			end=i; 
		}
		else{
			sum+=a[i];
			end=i;
		}
		if(sum>max){
			max=sum;
		}
	} 
	printf("%d\n%d %d",max,start,end);
	return 0;
	
	
}
