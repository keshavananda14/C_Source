#include<stdio.h>

int iGCD;
int GCD(int num1,int num2,int cnt)
{
	if(cnt > num1 || cnt > num2)
		return 0; 
	if((num1 % cnt == 0) && (num2 % cnt == 0))
		iGCD = cnt;
	cnt++;
	GCD(num1,num2,cnt);
}

int main()
{
	int iNum1 = 0,iNum2 = 0;
	printf("Enter the Numbers: ");
	scanf("%d%d",&iNum1,&iNum2);
	GCD(iNum1,iNum2,1);
	printf("GCD of %d and %d is: %d\n",iNum1,iNum2,iGCD);
}
