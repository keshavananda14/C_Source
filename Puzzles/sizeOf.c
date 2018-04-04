#include<stdio.h>

#define my_sizeof(x)	((char *) (&x+1) - (char*)(&x))

int main()
{
	int x;
	short int b;
	printf("%d %d \n",my_sizeof(x),my_sizeof(b));

}
