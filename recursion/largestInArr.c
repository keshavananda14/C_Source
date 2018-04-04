#include<stdio.h>

int largestNum = 0;
void largest(int *arr,int cnt)
{
	if(cnt < 0)
		return;
	cnt--;
	largest(arr,cnt);
	if(arr[cnt] > largestNum)
		largestNum = arr[cnt];
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
	largest(arr,count);
	printf("Largest Num: %d\n",largestNum);
}
