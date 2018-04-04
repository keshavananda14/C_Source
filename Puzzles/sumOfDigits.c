#include<stdio.h>

int sumOfDigits(int num)
{
	int sum = 0;
	for(;num;num/=10)
	{
		sum += num%10; 
	}
	return sum;
}

int main()
{
	int num = 1234;
	printf("Sum = %d \n",sumOfDigits(num));
}
