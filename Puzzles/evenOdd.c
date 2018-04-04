/*
Print “Even” or “Odd” without using conditional statement
*/
#include<stdio.h>

int main()
{
	char buff[2][5] = {"Even","Odd"};
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	printf("%s\n",buff[num%2]);
}
