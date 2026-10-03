int main()
{
	printf("请分别输入身高的英寸和英尺：");
	
	double foot;
	double inch;
	
	scanf("%lf %lf", &foot,&inch);
	printf("身高是%f米\n",((foot + inch / 12)*0.3048));
	
	return 0 ;
}
