#include<stdio.h>
int min(int a,int b){
	if(a>=b){
		return b;
	}
	if(a<b){
		return a;
	}
}
int main()
{
	int n,k;
	scanf("%d",&n);
	int a[100005];
	for(k=1;k<=n;k++){
		scanf("%d",&a[k]);
	}
	int h=0,d=0,best=h*d;
	int i=1,j=n;
	while(i<j){
		h=min(a[i],a[j]);
		d=j-i;
		if(h*d>best){
			best=h*d;
		}
			if(a[i]<=a[j]){
				i++;
			}
			else{
				j--;
			}
	}
	printf("%d",best);
	return 0;
}
