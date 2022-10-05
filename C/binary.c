#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[100],i,n,k;
  printf("Enter the array size:");
  scanf("%d",&n);
  printf("Enter the array elements: \n");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter the search element:");
  scanf("%d",&k);
  int beg =0,end =n-1,mid;
  while( beg <= end)
  {
    mid = (beg+end)/2;
    if(a[mid] == k)
    {
     printf("Element found at index: %d, location: %d",mid,mid+1);
     exit(0);
    }
    else
    {
     if(a[mid] < k)
      beg=mid+1;
     else
      end=mid-1;
    }
  }
  printf("Element not found");
}

