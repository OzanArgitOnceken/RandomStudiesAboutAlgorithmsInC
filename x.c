#include <stdio.h>
#include <stdlib.h>
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void main()
{
	int arr[50];
	int i=0;
	for(i=49;i>=0;i--)
		arr[i]=50-i;
	quickSort(arr,0,50);
	
		
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; 
    int i = (low - 1);  
 	int j
    for (int j = low; j <= high- 1; j++)
    {
        
        if (arr[j] <= pivot)
        {
            i++;    
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
 
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
