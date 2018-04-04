#include<stdio.h>

int log2n(int n)
{
	return (n>1)?1 + log2n(n/2):0;
}

int main()
{
	int num = 64;
	printf("log2n = %d \n",log2n(num));
}
