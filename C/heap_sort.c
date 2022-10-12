#include <stdio.h>

void heapify(int array[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && array[left] > array[largest]) {
        largest = left;
    }
    if(right < n && array[right] > array[largest]) {
        largest = right;
    }
    if(largest != i) {
        int temp = array[i];
        array[i] = array[largest];
        array[largest] = temp;
        heapify(array, n, largest);
    }
}

void build_heap(int array[], int n) {
    for(int i = n / 2 - 1; i >= 0; i--) {
        heapify(array, n, i);
    }
}

void heap_sort(int array[], int n) {
    build_heap(array, n);
    for(int i = n - 1; i >= 0; i--) {
        int temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heapify(array, i, 0);
    }
}

int main() {
    
    int n;

    printf("\nEnter number of elements to sort: ");
    scanf("%d", &n);

    int array[n];

    printf("\nEnter the elements of the array\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    heap_sort(array, n);

    printf("\nElements after sorting through heap sort\n");
    
    for(int i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");

    return 0;
}
