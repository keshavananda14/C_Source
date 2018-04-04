#include<stdio.h>
void swap(int *num1,int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;	
}

int partition(int arr[],int low, int high)
{
	int i,j,pivot;
	pivot = arr[high];
	i = (low-1);
	for(j = low;j <= high-1; j++)
	{
		if(arr[j] < pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);

}

void quickSort(int arr[],int low,int high)
{
	if(low < high)
	{
		int pi = partition(arr,low,high);	
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}

int main()
{
	int arr2[10],arr[10] = {2,10,1,6,9,3,7,8,5,4},i = 0;
	printf("Before Sorting: ");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	quickSort(arr,0,9);	
	printf("\nAfter Sorting: ");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
}
