#include<stdio.h>
int main()
{
    int i,n,x=0,y=1,z;
    printf("\n Enter no. of term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",x);
        z=x+y;
        y=x;
        x=z;
    }
    return 0;
}