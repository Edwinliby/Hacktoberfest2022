#include<stdio.h>
#include<stdlib.h>

int i,j,n,a[50];
void insertionsort();

void main()
{
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    insertionsort();
}

void insertionsort()
{
    int key;
    for(i=1;i<n;i++)
    {
        key =a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("The sorted array elements:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }   
}