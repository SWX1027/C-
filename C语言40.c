#include<stdio.h>
int main ()
{
	int n,t;
	scanf("%d",&n);
	int a[n];
	for(t=1;t<=n;t++){
		scanf("%d",&a[t]);
	} 
	int i=1,j=n;
	int ok=1;
	while(i<j){
		if(a[i]!=a[j]){
			ok=0;
			break;
		}
		i++;
		j--;
	}
	printf("%d",ok); 
	
}
