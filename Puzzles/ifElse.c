#include<stdio.h>

int main()
{
#if 0
	if(1)
	{
lable1:
		printf("Hello");
		goto lable2;
	}
	else
	{
lable2:
		printf("World\n");
	}
#endif
	if(!printf("Hello"))
		printf("Hello");
	else
		printf("World\n");
}
