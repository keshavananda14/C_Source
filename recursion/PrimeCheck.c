#include<stdio.h>

int PrimeOrNot(int iNum,int i)
{
#if 0
	static int cnt = 1;
	if(cnt >= iNum)	
		return 0;
	if((iNum%cnt) == 0)
		count++;
	cnt++;
	PrimeOrNot(iNum);
#endif
	if(i == 1)
		return 1;
	else
	{
		if(iNum%i == 0)
			return 0;
		PrimeOrNot(iNum,i-1);
	}
}

int main()
{
        int iNum = 0,prime = 0;
        printf("Enter the Num: ");
        scanf("%d",&iNum);
	prime = PrimeOrNot(iNum,iNum/2);
	if(prime == 1)
		printf("%d is Prime Number\n",iNum);
	else
		printf("%d is Not Prime Number\n",iNum);
}
