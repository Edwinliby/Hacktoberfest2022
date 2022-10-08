#include<stdio.h>
#include<conio.h>
void Counting_sort(int A[], int k, int n)
{
int i, j;
int B[15], C[100];
for(i = 0; i <= k; i++)
C[i] = 0;
for(j =1; j <= n; j++)
C[A[j]] = C[A[j]] + 1;
for(i = 1; i <= k; i++)
C[i] = C[i] + C[i-1];
for(j = n; j >= 1; j--)
{
B[C[A[j]]] = A[j];
C[A[j]] = C[A[j]] - 1;
}
printf("\nThe Sorted array is :\n");
for(i = 1; i <= n; i++)
printf("\t%d",B[i]);
}
void main()
{
clrscr();
int n,i,k = 0, A[15];
printf("\t\tCOUNTING SORT ALGORITHM\n\n\n\n");
printf("Enter the number of input : ");
scanf("%d",&n);
printf("\n\nEnter the elements to be sorted :\n");
for ( i = 1; i <= n; i++)
{
scanf("%d",&A[i]);
if(A[i] > k)
{
k = A[i];
}
}
Counting_sort(A, k, n);
getch();

}
