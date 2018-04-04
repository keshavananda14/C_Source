#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a-b;
}

int multiply(int a,int b)
{
	return a*b;
}
int main()
{
	int a,b,c;
	printf("%p\n",main);
	int (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	
	a = (*fun_ptr_arr[0])(2,3);	
	b = (*fun_ptr_arr[1])(2,3);	
	c = (*fun_ptr_arr[2])(2,3);	

	printf("%d %d %d\n",a,b,c);
	
	a = 10;b = 5;
	c = a * b / 3;	

	printf("%d %d %d\n",a,b,c);
}
