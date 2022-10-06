// Selection sort algorithm

#include <stdio.h>

// function to swap two values
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// function to sort an array  
void selectionsort(int arr[], int n)
{
	int min_idx;

	// For each iteration replace the ith index smallest number 
	for (int i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (int j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}

// Function to print an array 
void printarray(int arr[], int size)
{
	for (int i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver code
int main()
{
	int n;
  scanf(" %d", &n);
	int arr[n];
  // Taking n numbers as input 
  for(int i = 0; i < n; i++){
    scanf(" %d", &arr[i]);
  }
	selectionsort(arr, n);
	printf("Sorted array: \n");
	printarray(arr, n);
	return 0;
}
