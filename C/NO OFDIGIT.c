#include <stdio.h>
int main()
{
    int rem,s=0,n;
    scanf("%d",&n);
    while (n!=0)
    {
    rem = n%10;
    s++;
    n=n/10;
    }
    printf("%d",s);
}

