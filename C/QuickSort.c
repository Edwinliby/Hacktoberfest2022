#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int t = *a; //temporary
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for ( j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);
        QuickSort(arr,low, pi -1);
        QuickSort(arr,pi + 1, high);
    }
}

void PrintArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int data[] = {4, 6, 3, 17, 10, 15, 12};
    int n = sizeof(data)/sizeof(data[0]);
    printf("Unsorted Array: \n");
    PrintArray(data, n);
    QuickSort(data, 0, n-1);
    printf("\n Sorted Array: \n");
    PrintArray(data, n);
}