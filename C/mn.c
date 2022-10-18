#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,sum=0;
    printf("Enter the no. of row\n");
    scanf("%d",&m);
    printf("Enter the no. of column\n");
    scanf("%d",&n);
    printf("Enter the element of array\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("The sum of element is %d",sum);
}