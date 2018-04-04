#include<stdio.h>
void swap(int *num1,int *num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;	
}

void heapify(int arr[],int n, int i)
{
	int largest = i;
	int l	= 2*i + 1;
	int r	= 2*i + 2;
	
	if(l < n && arr[l] > arr[largest])
		largest = l;
	if(r < n && arr[r] > arr[largest])
		largest = r;

	if(largest != i)
	{
		swap(&arr[largest],&arr[i]);
		heapify(arr,n,largest);
	}
}

void HeapSort(int arr[],int n)
{
	int i = 0;
	for(i = n/2-1; i >=0; i--)
		heapify(arr,n,i);
	for(i = n-1; i >= 0; i--)
	{
		swap(&arr[0],&arr[i]);
		heapify(arr,i,0);
	}
}

int main()
{
	int arr2[10],arr[10] = {2,10,1,6,9,3,7,8,5,4},i = 0;
	printf("Before Sorting: ");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	HeapSort(arr,10);	
	printf("\nAfter Sorting: ");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
}
