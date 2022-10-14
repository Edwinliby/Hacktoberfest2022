//WAP to sort an array in ascending order
#include<stdio.h>

int main()
{
int i,j,n,c;
printf("Enter size: ");
scanf("%d",&n);
int ar[n];
printf("Enter elements of array: ");
for(i=0;i<n;++i)
 scanf("%d",&ar[i]);	
for(i=0;i<n;++i)
{
	for(j=i+1;j<n;++j)
	{
		if(ar[i]>ar[j])
          { c=ar[i];
		    ar[i]=ar[j];
		    ar[j]=c;   }
	}
}
printf("Sorted Array is ");

for(i=0;i<n;++i)
	printf("%d ",ar[i]);

return 0;
}
