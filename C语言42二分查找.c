#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int x,q;
	int found=0;
	scanf("%d",&q); 
	for(i=1;i<=q;i++){
		scanf("%d",&x);
		int left=1,right=n, mid=n/2;
		while(left<=right){
			if(a[mid]==x){
				found=1;
				printf("%d\n",mid);
				break;
			}
			else if(a[mid]<x){
				left=mid+1;
				mid=(left+right)/2;
			}
			else{
				right=mid-1;
				mid=(left+right)/2;
			}
		}
		if(found==0){
			printf("-1\n");
		}
	}
    return 0;
}
