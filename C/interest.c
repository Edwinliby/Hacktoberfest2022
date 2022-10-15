/*Calculation of simple interest*/
#include<stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("Enter the value of p,n,r\n");
    scanf("%d%d%f",&p,&n,&r);
    si=p*n*r/100;
    printf("The simple interest is %f\n",si);
    return 0;
}