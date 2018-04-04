#include<stdio.h>

char *reverse(char arr[])
{
	static char rev[100];
	static int i = 0;

	if(*arr)
	{
		reverse(arr+1);
		rev[i++] = *arr;
	}
	return rev;
}

int main()
{
	char str[100],*reve;
	printf("Enter the string: ");
	scanf("%s",str);
	reve = reverse(str);
	printf("After reverse: %s \n",reve);
}
