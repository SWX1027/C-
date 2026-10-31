#include<stdio.h>
int check(int x,int m,int n,int a[])	
{
	int sum=0,l=1,i;
	for(i=0;i<n;i++){
		sum+=a[i];
		if(sum>x){
			l++;
			sum=a[i];
		}
	}
	if(l<=m){
		return 1;
	}
	if(l>m){
		return -1;
	}
}
int max(int a[],int n){
	int i,M=a[0];
	for(i=1;i<n;i++){
		if(a[i]>M){
			M=a[i];
		}
	}
	return M;
}
int main()
{
	int n,m,i,sum=0;
	scanf("%d%d",&n,&m);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int M=max(a,n);
	int L=M,R=sum,mid=(L+R)/2;
	while(L<R){
		if(check(mid,m,n,a)==1){
			R=mid;
			mid=(R+L)/2;
			}
		else if(check(mid,m,n,a)==-1){
			L=mid+1;
		    mid=(R+L)/2;
            } 
	}
	printf("%d",mid);
	return 0;
}
