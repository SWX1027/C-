#include<stdio.h>
int main()
{	
    int L,R,q,n,i;
	scanf("%d",&n);
	int a[1005];
	int s[1005];
	s[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i]; 
	}
	scanf("%d",&q);
	for(i=1;i<=q;i++){
		scanf("%d%d",&L,&R);
	printf("%d\n",s[R]-s[L-1]);	
	}
	return 0;
	
}
