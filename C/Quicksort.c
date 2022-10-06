#include<stdio.h>

int loc,a[50],n,p;

void swap(int x, int y) 
{
  int t = a[x];
  a[x] = a[y];
  a[y] = t;
}

int partition(int a[],int first,int last)
{
    loc = first;
    while(first < last)
    {
        while(a[loc] <= a[last] && loc < last)
        {
            last = last - 1;
        }
        if( a[loc] > a[last] )
        {
            swap(loc, last);
            loc = last;
            first = first + 1;
        }
        while(a[loc] >= a[first] && loc > first)
        {
            first = first + 1;
        }
        if( a[loc] < a[first] )
        {
            swap(loc, first);
            loc = first;
            last = last - 1;
        }
    }
    return(loc);
}

int quicksort(int a[],int first,int last)
{
    if(first < last)
    {
        p = partition( a, first, last);
        quicksort( a, first, p-1);
        quicksort( a, p+1, last);
    }
}

void print(int n)
{
    printf("Sorted array is:");
    for(int i=1; i<=n;i++)
        printf("%d ",a[i]);
}

int main()
{
    int i;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n);
    print(n);
}
