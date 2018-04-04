#include<stdio.h>

void print(int *arr,int cnt)
{
	if(cnt <= 0)
		return;
	cnt--;
	print(arr,cnt);
	printf("%d ",arr[cnt-1]);
}

int main()
{
	int count = 0,i,num;
	printf("Enter the No of Elements to Store in array: ");
	scanf("%d",&count);
	int arr[count];
	printf("Input %d Elemets in array\n",count);
	for(i = 0; i < count; i++)
	{
		printf("Element %d: ",i);
		scanf("%d",&num);
		arr[i] = num;
	}
	print(arr,count);
	printf("\n");
}
