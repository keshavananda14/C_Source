#include<stdio.h>

int factorial(int num)
{
	if(num <= 1)
		return 1;	
	return (num*factorial(num-1));
}

int main()
{
	int iNum = 0;
	printf("Enter the num: ");
	scanf("%d",&iNum);
	printf("Factorial of Num is: %d \n",factorial(iNum));
}
