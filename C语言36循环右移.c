#include<stdio.h>
void myswap(int *a,int *b)
{
	int s=*a;
	*a=*b;
	*b=s;
 } 
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	myswap(&x,&y);
	printf("(%d,%d)",x,y);
	return 0;
}
