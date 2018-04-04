#include<stdio.h>

void print(int n)
{
	if(n > 1)
		print(n-1);
	printf("%d ",n);
}

int main()
{
	int num = 100;
	print(num);
	printf("\n");
}
