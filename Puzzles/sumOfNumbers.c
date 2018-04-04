#include<stdio.h>

int sum(int a,int b)
{
	return printf("%*c%*c",a,' ',b,' ');
}

int main()
{
	printf("Sum = %d\n",sum(2,3));
}
