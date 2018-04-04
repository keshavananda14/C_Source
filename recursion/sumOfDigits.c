#include<stdio.h>

int sum;
int countDigits(int num)
{
	if(num == 0)
		return 0; 
	sum += num%10;
	countDigits(num/10);
}

int main()
{
	int iNum = 0,iNoOfDigits;
	printf("Enter the Number: ");
	scanf("%d",&iNum);
	countDigits(iNum);
	printf("Sum of Digits: %d\n",sum);
}
