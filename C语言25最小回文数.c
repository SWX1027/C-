#include<stdio.h>
int number(int x)//函数：判断数字位数 
{
int count=0;
do{
	x/=10;
	count++;
}while(x!=0);

return count;
}
int invert( int x)//函数：倒置各位数字 
{
	int t=0;
	do{
		t=t*10+x%10;
		x/=10;
	}while(x!=0);
	return t;
}
int pow10(int s)//函数：乘以10的次方 
{
	int t=1;
	while(s!=0){
		t*=10;
		s--;
	}
	return t;
}
int makePalindrome(int y, int s, int odd)//函数：最小数生成 
{
	int a;
	if(odd==0){
		a=y*pow10(s)+invert(y);
	}
	else{
		a=y*pow10(s)+invert(y/10);
	}
	return a;
}
int main()
{
	int x,s;
	int min;
	int odd;
	printf("请输入一个数：");
    scanf("%d",&x);
    int t=number(x);
    if(t%2==0){
    	s=t/2;
    	odd=0;
    	min=makePalindrome(x/pow10(s), s, odd);
    	if(min>x){
    		printf("最小回文数是%d",min);
		}
		else{
			min=makePalindrome(x/pow10(s)+1, s, odd);
    	    printf("最小回文数是%d",min);
		}
	}
	else{
		s=(t-1)/2;
		odd=1;
		min=makePalindrome(x/pow10(s), s, odd);
		if(min>x){
    		printf("最小回文数是%d",min);
		}
		else{
			min=makePalindrome(x/pow10(s)+1, s, odd);
    	    printf("最小回文数是%d",min);
	    }
	}
	return 0;
}
//gpt精简版////////////////////////////////////////////
 
#include <stdio.h>

int number(int x)
{
    int count = 0;
    do {
        x /= 10;
        count++;
    } while (x != 0);
    return count;
}

int invert(int x)
{
    int t = 0;
    do {
        t = t * 10 + x % 10;
        x /= 10;
    } while (x != 0);
    return t;
}

int power10(int s)
{
    int t = 1;
    while (s > 0) {
        t *= 10;
        s--;
    }
    return t;
}

int makePalindrome(int y, int s, int odd)
{
    if (odd)
        return y * power10(s) + invert(y / 10);
    return y * power10(s) + invert(y);
}

int main()
{
    int x;
    printf("请输入一个正整数：");
    scanf("%d", &x);

    if (x <= 0) {
        printf("输入错误");
        return 0;
    }

    int n = number(x);
    int s = n / 2;
    int odd = n % 2;
    int y = x / power10(s);

    int min = makePalindrome(y, s, odd);

    if (min <= x)
        min = makePalindrome(y + 1, s, odd);

    printf("最小回文数是%d\n", min);
    return 0;
}


