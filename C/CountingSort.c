#include <stdio.h>
#include <stdlib.h>
#define Max 100 
void CountingSort(int A[Max], int k, int n)  
{  
    int i, j;  
    int B[Max], C[k+1];  
    for (i = 0; i <= k; i++)  
        C[i] = 0;  
    for (j = 0; j < n; j++)  
        C[A[j]] = C[A[j]] + 1;  
    for (i = 1; i <= k; i++)  
        C[i] = C[i] + C[i-1];  
    for (j = n-1; j >= 0; j--)  
        B[--C[A[j]]] = A[j];
    printf("The Sorted array is : ");  
    for (i = 0; i < n; i++){
        A[i] = B[i]; 
        printf("%d ", A[i]);
    }  
}  

int main()  
{  
    int n, k = 0, A[Max], i;  
    printf("Enter the number of inputs : ");  
    scanf("%d", &n);
    if(n<0 || n>Max){
        printf("ERROR");
        exit(1);
    }
    printf("\nEnter the elements to be sorted : ");  
    for (i = 0; i < n; i++)  
    {  
        scanf("%d", &A[i]);  
        if (A[i] > k) {  
            k = A[i];  
        }  
    }  
    CountingSort(A, k, n);  
   
    return 0;  
}  