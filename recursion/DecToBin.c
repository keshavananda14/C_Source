#include<stdio.h>

long long int DecToBin(int iDecNum)
{
	static long long int bin = 0;
	static int Mul = 1;
#if 1
	if(iDecNum <= 0)
		return 0;
	bin += (iDecNum%2) * Mul;
	Mul *= 10;
	DecToBin(iDecNum/2);	
#else
	for(;iDecNum;iDecNum/=2,Mul*=10)
	{
		bin += (iDecNum%2) *  Mul;
	}
#endif
	return bin;
}

int main()
{
	int iNum = 0;
	long long int iBin = 0;
	printf("Enter the Num: ");
	scanf("%d",&iNum);
	iBin = DecToBin(iNum);
	printf("Binary: %lld \n",iBin);
}
