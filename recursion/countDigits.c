#include<stdio.h>

int digits;
int countDigits(int num)
{
	if(num == 0)
		return 0; 
	digits++;
	countDigits(num/10);
}

int main()
{
	int iNum = 0,iNoOfDigits;
	printf("Enter the Number: ");
	scanf("%d",&iNum);
	countDigits(iNum);
	printf("No Of Digits: %d\n",digits);
}
