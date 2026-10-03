#include <stdio.h>

int main(void)
{
    int x;
    int n=0;
     scanf("%d",&x);
     do{
     x/=10;
     n++;}
	 while(x>0);
	 printf("%d\n",n);
	 return 0;
}
