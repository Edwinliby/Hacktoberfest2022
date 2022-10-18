#include<stdio.h>
int main()
{
    float a[5],avg,sum=0.0;
    int i;
    printf("enter the marks of five subject:");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("Average marks of students is %f",avg);
    return 0;
}