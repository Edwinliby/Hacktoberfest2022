#include<stdio.h>
int addno(int p1,int q1);
int subno(int p2,int q2);
int mulno(int p3,int q3);
int main()
{
    int a=4,b=2,x,y,z;
    x=addno(a,b);
    y=subno(a,b);
    z=mulno(a,b);
    printf("Add is %d\n",x);
    printf("sub is %d\n",y);
    printf("multiplication is %d\n",z);
    return 0;
}
int addno(int p1,int q1)
{
    int m;
    m=p1+q1;
    return m;
}
int subno(int p2,int q2)
{
    int n;
    n=p2-q2;
    return n;
}
int mulno(int p3,int q3)
{
    int o;
    o=p3*q3;
    return o;
}