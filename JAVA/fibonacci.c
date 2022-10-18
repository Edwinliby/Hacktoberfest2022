#include<stdio.h>
main()
{
    int fib[10],i,n;
    fib[0]=0;
    fib[1]=1;
    printf("enter thr value of n\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",fib[i]);
    }
    return 0;
}