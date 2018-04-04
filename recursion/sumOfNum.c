#include<stdio.h>

int sum;

int sumOfNumbers(int max)
{
	if(max < 1)
		return 0;
	else
		sumOfNumbers(max - 1);
	sum += max;
	return 1;
}

int main()
{
	int iMaxNum = 0;
	printf("Enter the Last number: ");
	scanf("%d",&iMaxNum);
	sumOfNumbers(iMaxNum);
	printf("The sum of 1 to %d is: %d \n",iMaxNum,sum);
}
