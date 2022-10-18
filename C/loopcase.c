//to print the series of 1+3+5+9+11.....=sum
#include<stdio.h>
int main()
{
int i,n,a=5,s=0;
printf("\n Enter any number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    a=i*i;
    printf("\n %d",a);
    {
    
    }
    if(i<n)
    printf("+");
}
printf("\n =%d",s);
return 0;
}
