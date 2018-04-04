#include<stdio.h>
#define N 100

int main(int num)
{
#if 0
	if((num <= N) && printf("%d ",num) && main(num+1))
	{
	}
#endif
	//while(num<=N && printf("%d ",num) && num++){}
	while(num<=N)
	{
		if(printf("%d ",num) && ++num && ((num == N+1)?printf("\n"):0)){}
	}
}
