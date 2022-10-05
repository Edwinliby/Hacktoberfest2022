#include<stdio.h>
#include<stdlib.h>
int binary(int a[100],int k,int n);
int bubble(int a[100], int n);
int main()
{
	int i,j,n,a[100],temp,k;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for( i=0;i<n;i++)
	  {
	   scanf("%d",&a[i]);
	  }
        bubble(a,n); 
	printf("Sorted array:");
	for(i=0; i<n;i++)
	 printf("%d\n",a[i]);
	printf("Enter the search element:");
	scanf("%d",&k);
	binary(a,k,n);
}

int bubble(int a[100],int n)
{
int temp;
for(int i=0;i<n;i++)
 {for(int j=0;j<n-1-i;j++)
  {
   if(a[j]>a[j+1])
    {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
    }
   }
  }
}


int binary(int a[100],int k,int n)
{
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

	
