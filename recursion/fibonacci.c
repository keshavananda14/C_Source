#include<stdio.h>


int len = 0;
int fibonacci(int p,int c)
{
	static int i = 1;
	int n;
	if(i == len)
		return 0;
	else
	{	
		n = p + c;
		p = c;
		c = n;
		printf("%d ", n);
		i++;
		fibonacci(p,c);
	}

	return 0;
	/*
	   if(num <= 1)
	   return num;
	   return (fibonacci(num-1)+fibonacci(num-2));
	 */
}

int main()
{
	printf("Enter the nth Num: ");
	scanf("%d",&len);
	fibonacci(0,1);
	printf("\n");
}
