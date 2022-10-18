#include<stdio.h>
int main()
{
    int a[20],i,j,num,temp;
    printf("enter the size of array:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num-1;i++)
    {
        for(j=0;j<num-i-1;j++)
        {
            if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
        }
    }
    printf("\n sorted array:");
    for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}