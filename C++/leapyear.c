#include<stdio.h>
int main()
{
    int yr;
    printf("\n enter a year:");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==0)
        printf("leap year\n");
        else
        printf("not a leap year\n");
    }
    else
    {
        if(yr%4==0)
        printf("leap year\n");
        else
        printf("not a leap year\n");
    }
    return 0;
}