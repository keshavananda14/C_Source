#include<stdio.h>

int *bubbleSort(int *arr,int len)
{
	int i,j,temp;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++)
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}
}

int main()
{
	int arr2[10],arr[10] = {2,10,1,6,9,3,7,8,5,4},i = 0;
	printf("Before Sorting: ");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	bubbleSort(arr,10);	
	printf("\nAfter Sorting: ");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
}
