#include<stdio.h>
int main ()
{
	int i;
	int j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
		printf("%d*%d=%d\n",i,j,i*j);}
	}
	return 0;
}
