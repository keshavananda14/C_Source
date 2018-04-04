#include<stdio.h>

void print(int iNum)
{
	if(iNum < 1)
		return;
	else
		print(iNum - 1);
	printf("%d ",iNum);
}

int main()
{
	printf("The Natural Numbers are: ");
	print(50);
	printf("\n");
}
